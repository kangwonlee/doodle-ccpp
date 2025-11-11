// 26. https://youtu.be/EvXQtjJh51o&t=45s
#include <stdio.h>

int main() {
    const int arr[3] = { 1, 2, 3 };
    // a pointer to an array (or a whole array)
    const int(*p_arr)[3] = &arr;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", (*p_arr)[i]);
    }
}
