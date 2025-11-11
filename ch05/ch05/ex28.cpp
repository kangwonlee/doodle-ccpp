// 25. https://youtu.be/Kv3dl2puAMU&t=7
#include <stdio.h>

int main() {
    const int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (const int* ptr = arr; ptr < arr + 10; ptr++) {
        printf("%d\n", *ptr);  // 주의: ptr이 아니라 *ptr을 출력한다.
    }
}
