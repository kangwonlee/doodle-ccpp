#include <stdio.h>

int main() {
    const int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

    printf("%ld\n", (long) &arr[0]);      // arr[0]�� �ּڰ�
    printf("%ld\n", (long) arr);          // ���� ���� ��
    printf("%ld\n", (long) &arr[1]);      // arr[1]�� �ּڰ�
    printf("%ld\n", (long) arr + 1);      // ���� ���� ��
    printf("%ld\n", (long) &arr[0] + 1);  // ���� ���� ��
}
