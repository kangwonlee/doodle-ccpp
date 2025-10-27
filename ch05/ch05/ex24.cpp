#include <stdio.h>


int main() {

    int a = 10;
    int* ptr_a = &a;

    printf("ptr_a = %d\n", ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %d\n", ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %d\n", ptr_a);
    // printf("%d\n", *ptr_a); 는 어떤 값을 화면에 표시?
}
