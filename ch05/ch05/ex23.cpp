// 25. https://youtu.be/Kv3dl2puAMU&t=7s
#include <stdio.h>

int main() {
    const int a = 10;

    printf("&a = %ld\n", (long) &a);
    printf("(&a) + 1 = %ld\n", (long) ((&a) + 1));
    printf("(&a) + 2 = %ld\n", (long) ((&a) + 2));
}
