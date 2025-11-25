// 57. https://youtu.be/2rXLncQD27c&t=7s
// https://learn.microsoft.com/en-us/cpp/cpp/delegating-constructors
#include <iostream>
using namespace std;

class Time {
public:
    Time(const int s=0): h(0), m(0), s(s) {}
    Time(const int m, const int s): Time(s) {
        this->m = m;
    }
    Time(const int h, const int m, const int s): Time(m, s) {
        this->h = h;
    }
    void print();

private:
    int h;
    int m;
    int s;
};

void Time::print() {
    cout << h << ":" << m << ":" << s;
}

int main() {
    Time t1;
    Time t2(5);
    Time t3(3, 16);
    Time t4(2, 42, 15);

    cout << "t1 : "; t1.print(); cout << endl;
    cout << "t2 : "; t2.print(); cout << endl;
    cout << "t3 : "; t3.print(); cout << endl;
    cout << "t4 : "; t4.print(); cout << endl;
}
