#include <stdio.h>

int plus(int a, int b) {
    return a + b;  // a�� b�� ���� ���� �����Ѵ�.
}

int main() {
    int sum = plus(3, 5);  // plus �Լ��� ������ ���� sum�� �����Ѵ�.
    printf("%d\n", sum);
}
