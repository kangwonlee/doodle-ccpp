#include <stdio.h>

int main() {
    int n = 0;
    int arr[1000] = {0};

    printf("�Է��� ������ ���� : ");
    scanf("%d", &n);
    printf("���� %d���� �Է��ϼ��� : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
