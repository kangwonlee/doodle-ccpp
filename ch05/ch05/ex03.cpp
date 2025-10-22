#include <stdio.h>

int main() {
    int arr[5] = { 1, 3, 5, 7, 9 };

    const int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
