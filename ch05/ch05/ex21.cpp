#include <stdio.h>

int main() {
    const int a = 10;
    const int b = 20;

    const int* ptr = &a;  // ptr�� ó������ a�� ����Ų��.
    printf("ptr�� ����Ű�� ������ �� : %d\n", *ptr);

    ptr = &b;      // ���� ptr�� b�� ����Ű�� �ȴ�.
    printf("ptr�� ����Ű�� ������ �� : %d\n", *ptr);
}
