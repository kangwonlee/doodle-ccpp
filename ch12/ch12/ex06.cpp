// 77. https://youtu.be/L_fo_ZtMDVQ&t=8s
#include <iostream>
using namespace std;

class Base {
public:
    int a = 10; // newer syntax
};

class Derived : public Base {
public:
    int a = 20; // newer syntax
};

int main() {
    Base b;
    Derived d;

    cout << b.a << endl;
    cout << d.a << endl;
}
