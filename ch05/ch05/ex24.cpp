#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a = &a;

    printf("ptr_a = %d\n", ptr_a);
    ptr_a ++;
    printf("ptr_a ++ : %d\n", ptr_a);
    ptr_a ++;
    printf("ptr_a ++ : %d\n", ptr_a);
}
