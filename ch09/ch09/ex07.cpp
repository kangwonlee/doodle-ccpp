#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int& i : arr) {  // i�� ���۷����� �����ϸ�...
        i++;              // arr�� �� ĭ�� �ٲ� �� �ִ�.
    }
    for (int i : arr) {   // ���⼭�� �迭�� ����� ���� �����Ƿ� �Ϲ� ������ ����
        cout << i << ' ';
    }
    cout << endl;
}
