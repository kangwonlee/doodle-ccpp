#include <iostream>
using namespace std;

void swap(int& a, int& b) {  // int�� �����ϴ� �Լ�
    int tmp = a;
    a = b;
    b = tmp;
}
void swap(double& a, double& b) {  // double�� �����ϴ� �Լ�
    double tmp = a;
    a = b;
    b = tmp;
}
void swap(char& a, char& b) {  // char�� �����ϴ� �Լ�
    char tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 10, b = 20;
    double da = 12.34, db = 56.78;
    char ca = 'A', cb = 'B';

    swap(a, b);    // swap(int &a, int &b) ȣ��
    swap(da, db);  // swap(double &a, double &b) ȣ��
    swap(ca, cb);  // swap(char &a, char &b) ȣ��

    cout << a << " " << b << endl;
    cout << da << " " << db << endl;
    cout << ca << " " << cb << endl;
}
