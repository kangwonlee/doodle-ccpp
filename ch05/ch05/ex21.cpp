#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int* ptr = &a;  // ptr�� ó������ a�� ����Ų��.
    printf("ptr�� ����Ű�� ������ �� : %d\n", *ptr);

    ptr = &b;      // ���� ptr�� b�� ����Ű�� �ȴ�.
    printf("ptr�� ����Ű�� ������ �� : %d\n", *ptr);
}
