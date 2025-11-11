// 36. https://youtu.be/mS-pdOCVBoo&t=7s
#include <stdio.h>

void printArr(const int parr[4]) {
    printf("parr의 값 : %d\n", parr);
}

int main() {
    const int arr[4] = { 1, 2, 3, 4 };

    printf("arr의 값 : %d\n", arr);
    printArr(arr);

    puts("");
}
