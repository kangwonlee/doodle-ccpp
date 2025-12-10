// begin cash_card_composition.cpp
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>

// ==========================================
// 1. CardLogger Class (별도의 로깅 전담 부품)
// ==========================================
// "기록한다"는 단일 책임(Single Responsibility)만 가집니다.
// 어느 카드에든 부착되어 사용될 수 있습니다.

struct Transaction {
    std::string time;
    std::string action;
    int amount;
    int balance;
};

class CardLogger {
private:
    std::vector<Transaction> log_history;

    // Helper method to get current timestamp string
    std::string get_timestamp() {
        std::time_t now = std::time(nullptr);
        char buffer[100];
        // Using localtime_s for thread safety (C++11 and later recommended practice, though localtime works for simple examples)
        struct tm timeinfo;
        #if defined(_WIN32) || defined(_WIN64)
            localtime_s(&timeinfo, &now);
        #else
            localtime_r(&now, &timeinfo); // POSIX
        #endif
        std::strftime(buffer, sizeof(buffer), "%a %b %d %H:%M:%S %Y", &timeinfo);
        return std::string(buffer);
    }

public:
    // 외부에서 호출 가능한 로깅 메서드
    void log_transaction(const std::string& action, int amount, int balance) {
        Transaction trans;
        trans.time = get_timestamp();
        trans.action = action;
        trans.amount = amount;
        trans.balance = balance;
        log_history.push_back(trans);
    }

    void show_log() const {
        std::cout << "\n--- [Card Transaction Log] ---" << std::endl;
        for (const auto& trans : log_history) {
            std::cout << "Time: " << trans.time 
                      << " | Action: " << std::setw(8) << trans.action 
                      << " | Amount: " << std::setw(5) << trans.amount 
                      << " | Balance: " << trans.balance << std::endl;
        }
        std::cout << "------------------------------\n" << std::endl;
    }
};


// ==========================================
// 2. CashCard Base Class (Composition 적용)
// ==========================================
class CashCard {
protected:
    int balance;
    // [핵심 변경점] Composition: 카드는 로거를 "가지고 있을 수" 있습니다.
    // 포인터를 사용하여 로거가 없을 수도 있음(nullptr)을 표현합니다.
    CardLogger* logger; 

public:
    static std::string call_center_phone_number;

    CashCard(int init_b = 0) : balance(init_b), logger(nullptr) {}

    virtual ~CashCard() {}

    // 로거 장착(부착) 메서드
    void set_logger(CardLogger* l) {
        logger = l;
        std::cout << "[System] CardLogger attached successfully." << std::endl;
    }

    int check_balance() const {
        return balance;
    }

    virtual void deposit(int amount) {
        balance += amount;
        // 로거가 장착되어 있다면 기록을 위임합니다.
        if (logger != nullptr) {
            logger->log_transaction("deposit", amount, balance);
        }
    }

    virtual void withdraw(int amount) {
        balance -= amount;
        // 로거가 장착되어 있다면 기록을 위임합니다.
        if (logger != nullptr) {
            logger->log_transaction("withdraw", amount, balance);
        }
    }
};

std::string CashCard::call_center_phone_number = "1234-5678";


// -------------------------
// MinZeroCard Class
// -------------------------
// (기존과 동일) 잔액이 0 이하로 내려가지 않게 막는 카드
class MinZeroCard : public CashCard {
public:
    MinZeroCard(int init_b = 0) : CashCard(init_b) {}

    void withdraw(int amount) override {
        if (amount > check_balance()) {
            std::cout << "[Error] balance " << balance << " is not enough to withdraw " << amount << std::endl;
        } else {
            // 성공적인 경우에만 부모의 withdraw 호출 (로그도 이때 기록됨)
            CashCard::withdraw(amount);
        }
    }
};


// -------------------------
// LimitCard Class
// -------------------------
// (기존과 동일) 1회 인출 한도가 있는 카드
class LimitCard : public MinZeroCard {
protected:
    int limit;

public:
    LimitCard(int init_b, int limit) : MinZeroCard(init_b), limit(limit) {}

    void withdraw(int amount) override {
        if (amount > limit) {
            std::cout << "[Error] withdrawal amount " << amount << " exceeds the limit of " << limit << std::endl;
        } else {
            // 한도 체크 통과 시 부모(MinZeroCard)에게 위임
            MinZeroCard::withdraw(amount);
        }
    }
};


// ==========================================
// 3. CashbackCard Class
// ==========================================
// LimitCard의 기능을 모두 가지면서, 입금 시 포인트가 적립되는 카드
class CashbackCard : public LimitCard {
private:
    double points; // 적립된 포인트 (소수점 가능)
    const double cashback_rate = 0.01; // 1% 적립률

public:
    CashbackCard(int init_b, int limit) : LimitCard(init_b, limit), points(0.0) {}

    // 입금 메서드 오버라이드 (포인트 적립 로직 추가)
    void deposit(int amount) override {
        // 1. 먼저 부모 클래스의 입금 로직 수행 (잔액 증가 및 로깅 처리)
        LimitCard::deposit(amount);

        // 2. 자신만의 포인트 적립 로직 수행
        double earned_points = amount * cashback_rate;
        points += earned_points;
        std::cout << "[Cashback] " << earned_points << " points credited. Total points: " << points << std::endl;
    }

    double check_points() const {
        return points;
    }
};


// -------------------------
// Main function - Demo
// -------------------------
int main() {
    // 1. 로거 준비 (독립적인 객체)
    CardLogger my_logger;

    std::cout << "=== 1. Basic Cards Demo (No Logger) ===" << std::endl;
    MinZeroCard card_a(1000);
    card_a.withdraw(2000); // 실패 (로그 안 남음)
    card_a.deposit(500);   // 성공 (로거가 연결 안 되어 있어서 로그 안 남음)
    std::cout << "Card A Balance: " << card_a.check_balance() << std::endl << std::endl;


    std::cout << "=== 2. LimitCard with Logger Demo (Composition) ===" << std::endl;
    // LimitCard 생성
    LimitCard card_b(10000, 3000);
    
    // [중요] 로거 장착 (Composition을 통해 기능 추가)
    card_b.set_logger(&my_logger);

    std::cout << "Initial balance: " << card_b.check_balance() << std::endl;
    card_b.withdraw(1000); // 성공 -> 로깅됨
    card_b.withdraw(5000); // 실패 (한도 초과) -> 로깅 안 됨
    card_b.deposit(2000);  // 성공 -> 로깅됨

    // 기록 확인 (로거에게 요청)
    my_logger.show_log();


    std::cout << "=== 3. CashbackCard Demo (Inheritance + Composition) ===" << std::endl;
    // CashbackCard는 LimitCard를 상속받았으므로 한도 기능과 포인트 기능이 모두 있음
    CashbackCard card_c(5000, 2000);

    // CashbackCard에도 동일한 로거를 장착할 수 있음 (유연성)
    card_c.set_logger(&my_logger);

    std::cout << "--- Deposit 10000 ---" << std::endl;
    // 입금 시: 잔액 증가 + 로그 기록 + 포인트 적립 세 가지가 동시에 일어남
    card_c.deposit(10000); 

    std::cout << "--- Withdraw 1500 ---" << std::endl;
    card_c.withdraw(1500);

    std::cout << "\nFinal Balance: " << card_c.check_balance() << std::endl;
    std::cout << "Final Points: " << card_c.check_points() << std::endl;

    // 두 카드의 기록이 모두 담긴 통합 로그 확인
    my_logger.show_log();

    return 0;
}
// end cash_card_composition.cpp
