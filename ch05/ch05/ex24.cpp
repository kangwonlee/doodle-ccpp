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
    // 위 행의 출력 결과를 예상할 수 있는가?
}
