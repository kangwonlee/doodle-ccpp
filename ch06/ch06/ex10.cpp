#include <stdio.h>

void swap(int x, int y) {  // x, y�� �Ű������� �޴´�.
    // x, y�� �����Ѵ�.
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);  // a, b�� �Է����� �޴´�.

    swap(a, b);             // a, b�� swap �Լ��� �ִ´�.

    printf("a=%d, b=%d\n", a, b);
}
