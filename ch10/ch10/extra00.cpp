#include <iostream>

using namespace std;

class CashCard {
  protected:
    int balance_krw;
  public:
    void withdraw(const int amount_krw) {
      balance_krw += (-1) * amount_krw;
    }
    void deposit(const int amount_krw) {
      balance_krw += amount_krw;
    }
    int balance() {
      return balance_krw;
    }
};

// Inheriting from Superclass CashCard
class MinZeroCard : public CashCard {
  public:
    void withdraw(const int amount_krw) {
      if (balance_krw < amount_krw) {
        cout << "Insufficient Balance" << '\n';
      } else {
        CashCard::withdraw(amount_krw);
      }
    }
};

int main() {
  CashCard my_card = CashCard();
  my_card.deposit(10000);
  my_card.withdraw(11000);
  cout << "balance = " << my_card.balance() << '\n' ;

  MinZeroCard my_min_zero_card = MinZeroCard();
  my_min_zero_card.deposit(10000);
  my_min_zero_card.withdraw(11000);
  cout << "balance = " << my_min_zero_card.balance() << '\n' ;

  return 0;
}
