#include <stdio.h>

int main() {
    int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

    printf("%d\n", &arr[0]);      // arr[0]�� �ּڰ�
    printf("%d\n", arr);          // ���� ���� ��
    printf("%d\n", &arr[1]);      // arr[1]�� �ּڰ�
    printf("%d\n", arr + 1);      // ���� ���� ��
    printf("%d\n", &arr[0] + 1);  // ���� ���� ��
}
