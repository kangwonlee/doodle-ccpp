#include <stdio.h>


int main() {

    const int a = 0x10203040;
    const int* ptr_a = &a;

    printf("ptr_a    = %ld\n", (long) ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %ld\n", (long) ptr_a);

    ptr_a ++;
    printf("ptr_a ++ : %ld\n", (long) ptr_a);

    // printf("%d\n", *ptr_a);
    // 위 행의 출력 결과를 예상할 수 있는가?

    const char* p = (char *) &a;
    printf("%ld\t%x\n", (long) p+0, (int) *(p+0));
    printf("%ld\t%x\n", (long) p+1, (int) *(p+1));
    printf("%ld\t%x\n", (long) p+2, (int) *(p+2));
    printf("%ld\t%x\n", (long) p+3, (int) *(p+3));
}
