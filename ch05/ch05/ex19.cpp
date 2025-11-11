// 24. https://youtu.be/wNPWpbS1PLU&t=7s
#include <stdio.h>

int main() {
    const int a = 10;
    const int* ptr_a = &a;

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %ld\n", (long) &a);
    printf("ptr_a의 값 : %ld\n", (long) ptr_a);
    printf("ptr_a에 저장된 주소에 저장된 값 : %d\n", *ptr_a);
}
