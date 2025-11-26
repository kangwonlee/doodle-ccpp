// 55. https://www.youtube.com/watch?v=ou7eSymxo5U&t=8s
#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis() {
        cout << "this = " << this << endl;
    }

    int x;
};

int main() {
    MyClass a, b;

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    a.PrintThis();
    b.PrintThis();
}
