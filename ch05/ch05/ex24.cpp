#include <stdio.h>


int main() {

    const int a = 10;
    const int* ptr_a = &a;

    printf("ptr_a    = %ld\n", (long) ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %ld\n", (long) ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %ld\n", (long) ptr_a);

    // printf("%d\n", *ptr_a);
    // �� ���� ��� ����� ������ �� �ִ°�?
}
