// 24. https://youtu.be/wNPWpbS1PLU&t=7s
#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a = &a;

    *ptr_a = 20;
    printf("a = %d\n", a);
    printf("*ptr_a = %d\n", *ptr_a);
}
