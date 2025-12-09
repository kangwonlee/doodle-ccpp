// begin cash_card.cpp
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>

// -------------------------
// CashCard Base Class
// -------------------------
class CashCard {
protected:
    int balance;

public:
    // Class variable (static member)
    static std::string call_center_phone_number;

    // Constructor
    CashCard(int init_b = 0) : balance(init_b) {}

    // Virtual destructor for proper cleanup
    virtual ~CashCard() {}

    // Reader method
    int check_balance() const {
        return balance;
    }

    // Deposit method
    virtual void deposit(int amount) {
        balance += amount;
    }

    // Withdraw method
    virtual void withdraw(int amount) {
        balance -= amount;
    }
};

// Initialize static member
std::string CashCard::call_center_phone_number = "1234-5678";

// -------------------------
// MinZeroCard Class (Inheritance)
// -------------------------
class MinZeroCard : public CashCard {
public:
    MinZeroCard(int init_b = 0) : CashCard(init_b) {}

    void withdraw(int amount) override {
        if (amount > check_balance()) {
            std::cout << "balance " << balance << " is not enough" << std::endl;
        } else {
            // Call superclass withdraw method
            CashCard::withdraw(amount);
        }
    }
};

// -------------------------
// LimitCard Class
// -------------------------
class LimitCard : public MinZeroCard {
protected:
    int limit;

public:
    LimitCard(int init_b, int limit) : MinZeroCard(init_b), limit(limit) {}

    void withdraw(int amount) override {
        if (amount > limit) {
            std::cout << "withdrawal amount " << amount << " exceeds the limit." << std::endl;
        } else {
            MinZeroCard::withdraw(amount);
        }
    }
};

// -------------------------
// Transaction Log Structure
// -------------------------
struct Transaction {
    std::string time;
    std::string action;
    int amount;
    int balance;
};

// -------------------------
// LoggingCard Class
// -------------------------
class LoggingCard : public LimitCard {
private:
    std::vector<Transaction> log;
    // std::vector<double> point; // vector of double variables
    // template <typename T>
    std::string get_timestamp() {
        std::time_t now = std::time(nullptr);
        char buffer[100];
        std::strftime(buffer, sizeof(buffer), "%a %b %d %H:%M:%S %Y",
                     std::localtime(&now));
        return std::string(buffer);
    }

    void timestamp(int amount, const std::string& action) {
        Transaction trans;
        trans.time = get_timestamp();
        trans.action = action;
        trans.amount = amount;
        trans.balance = check_balance();
        log.push_back(trans);
    }

public:
    LoggingCard(int init_b, int limit) : LimitCard(init_b, limit) {
        Transaction trans;
        trans.time = get_timestamp();
        trans.action = "creation";
        trans.amount = init_b;
        trans.balance = check_balance();
        log.push_back(trans);
    }

    void withdraw(int amount) override {
        LimitCard::withdraw(amount);
        timestamp(amount, "withdraw");
    }

    void deposit(int amount) override {
        LimitCard::deposit(amount);
        timestamp(amount, "deposit");
    }

    void show_log() const {
        std::cout << "Transaction Log:" << std::endl;
        std::cout << std::string(80, '-') << std::endl;
        for (const auto& trans : log) {
            std::cout << "Time: " << trans.time << std::endl;
            std::cout << "  Action: " << trans.action << std::endl;
            std::cout << "  Amount: " << trans.amount << std::endl;
            std::cout << "  Balance: " << trans.balance << std::endl;
            std::cout << std::string(80, '-') << std::endl;
        }
    }
};

// -------------------------
// Main function - Demo
// -------------------------
int main() {
    std::cout << "=== CashCard Demo ===" << std::endl;

    // Instantiation
    CashCard a_card(10000);
    CashCard b_card(9000);

    std::cout << "A card balance: " << a_card.check_balance() << std::endl;
    std::cout << "B card balance: " << b_card.check_balance() << std::endl;

    a_card.deposit(1000);
    std::cout << "A card after deposit: " << a_card.check_balance() << std::endl;

    b_card.withdraw(1000);
    std::cout << "B card after withdraw: " << b_card.check_balance() << std::endl;

    std::cout << "\n=== MinZeroCard Demo ===" << std::endl;
    MinZeroCard d_card(1000);
    d_card.withdraw(2000);

    std::cout << "\n=== LimitCard Demo ===" << std::endl;
    LimitCard card_e(10000, 2000);
    std::cout << "Initial balance: " << card_e.check_balance() << std::endl;

    card_e.withdraw(1000);
    std::cout << "After withdraw 1000: " << card_e.check_balance() << std::endl;

    card_e.withdraw(2500);
    std::cout << "After trying to withdraw 2500: " << card_e.check_balance() << std::endl;

    std::cout << "\n=== LoggingCard Demo ===" << std::endl;
    LoggingCard card_h(10000, 3000);
    card_h.deposit(1000);
    card_h.withdraw(500);
    card_h.show_log();

    return 0;
}
// end cash_card.cpp
