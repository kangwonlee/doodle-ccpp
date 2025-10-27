#include <stdio.h>

int main() {
    const int a = 10;
    const int* ptr_a = &a;
    const int** ptr_ptr_a = &ptr_a;  // 더블 포인터 선언

    printf("1. a           = %10ld\n", (long int) a);
    printf("2. &a          = %10ld\n", (long int) &a);
    printf("3. ptr_a       = %10ld\n", (long int) ptr_a);
    printf("4. &ptr_a      = %10ld\n", (long int) &ptr_a);
    printf("5. ptr_ptr_a   = %10ld\n", (long int) ptr_ptr_a);
    printf("6. *ptr_ptr_a  = %10ld\n", (long int) *ptr_ptr_a);
    printf("7. **ptr_ptr_a = %10ld\n", (long int) **ptr_ptr_a);
}
