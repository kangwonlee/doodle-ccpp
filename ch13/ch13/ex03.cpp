#include <iostream>
#include <string>
using namespace std;

template<typename T>
T getArraySum(const T arr[], int n) {
    T sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

template<>  // Ư��ȭ
string getArraySum(const string arr[], int n) {
    string sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += " " + arr[i];
    }
    return sum;
}

int main() {
    int     iarr[5] = { 3, 1, 4, 1, 5 };
    string  sarr[3] = { "hello", "world", "doodle" };

    int     isum = getArraySum(iarr, 5);  // ���ø����κ��� ������ �Լ� ����
    string  ssum = getArraySum(sarr, 3);  // Ư��ȭ�� �Լ� ����

    cout << isum << endl;
    cout << ssum << endl;
}
