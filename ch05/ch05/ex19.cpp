#include <stdio.h>

int main() {
    const int a = 10;
    const int* ptr_a = &a;

    printf("a�� �� : %d\n", a);
    printf("a�� �ּڰ� : %d\n", &a);
    printf("ptr_a�� �� : %d\n", ptr_a);
    printf("ptr_a�� ����� �ּҿ� ����� �� : %d\n", *ptr_a);
}
