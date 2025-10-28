#include <stdio.h>

int main() {
    const int arr[10] = {0};

    printf("%ld\n", (long) &arr);
    printf("%ld\n", (long) arr);
    printf("%ld\n", (long) &arr[0]);
}
