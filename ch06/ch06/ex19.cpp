#include <stdio.h>
// https://youtu.be/mS-pdOCVBoo

void printArr(int parr[4]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", parr[i]);
    }
}

int main() {
    int arr[4] = { 1, 2, 3, 4 };

    printArr(arr);
}
