// 36. https://youtu.be/mS-pdOCVBoo&t=7s
#include <stdio.h>

void printArr(const int parr[4]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", parr[i]);
    }
}

int main() {
    const int arr[4] = { 1, 2, 3, 4 };

    printArr(arr);
    puts("");
}
