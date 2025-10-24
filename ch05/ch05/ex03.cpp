#include <stdio.h>

int main() {
    int arr[5] = { 1, 3, 5, 7, 9 };

    const int n = sizeof(arr) / sizeof(arr[0]);
    // if `int` is 4 bytes,
    //  const int n = sizeof(arr) >> 2;
    // 20(10)
    // = 16(10) + 4(10)
    // = 2**4(10) + 2**2(10)
    // = 10000(2) + 100(2)
    // = 10100(2)
    // 20(10) >> 2(10)
    // = 10100(2) >> 2(10)
    // =   101(2)
    // = 5(10)

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
