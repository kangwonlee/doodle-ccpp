// 27. https://youtu.be/6i_z0te48vY&t=8s
#include <stdio.h>

int main() {
    const int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

    printf("%ld\n", (long) &arr[0]);      // arr[0]의 주솟값
    printf("%ld\n", (long) arr);          // 위와 같은 말
    printf("%ld\n", (long) &arr[1]);      // arr[1]의 주솟값
    printf("%ld\n", (long) arr + 1);      // 위와 같은 말
    printf("%ld\n", (long) &arr[0] + 1);  // 위와 같은 말
}
