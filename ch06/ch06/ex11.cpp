#include <stdio.h>

void swap(int* px, int* py) {
    int tmp = *px;  // px�� ����Ű�� ������ ���� tmp�� �ְ�
    *px = *py;      // py�� ����Ű�� ������ ���� px�� ����Ű�� ������ �ְ�
    *py = tmp;      // tmp�� ���� py�� ����Ű�� ������ �ִ´�.
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a=%d, b=%d\n", a, b);
}
