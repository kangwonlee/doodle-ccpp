// 60. https://youtu.be/ii9ZAOxlOU0&t=7s
#include <iostream>
using namespace std;

class Account {
public:
  Account() : money(0) {}
  Account(const int money) : money(money) {}

  void Deposit(const int amount) {
    money += amount;
    cout << amount << " deposited." << endl;
  }

  void Draw(const int amount) {
    if (money < amount) {
      cout << "Insufficient funds." << endl;
      return;
    }
    money += (-1) * amount;
    cout << amount << " withdrawn." << endl;
  }

  int ViewMoney() const {
    // const member function cannot modify member variables
    // money += 100; // error
    return money;
  }

private:
  int money;
};

int main() {
  Account alice(100);

  alice.Deposit(100);
  alice.Draw(20);

  cout << "Alice's balance: " << alice.ViewMoney() << endl;
}
