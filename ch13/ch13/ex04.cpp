#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    cout << "�ڿ����� �Է��ϼ��� : ";
    cin >> n;
    if (n >= 1) {  // n�� �ڿ����� ���� ���丮�� ���
        cout << n << "! = " << fact(n) << endl;
    }
    else {         // �ƴϸ� ���� �޽��� ���
        cout << n << ": �ڿ����� �ƴմϴ�." << endl;
    }
}
