#include <stdio.h>

int main() {
    int n;
    printf("���� �Է� : ");
    scanf("%d", &n);

    if (n > 0) {  // ������� Ȯ��
        printf("n�� ����Դϴ�.\n");
    }
    else if (n == 0) {  // ����� �ƴ϶�� 0���� Ȯ��
        printf("n�� 0�Դϴ�.\n");
    }
    else {  // ����� �ƴϰ� 0�� �ƴ϶�� ������.
        printf("n�� �����Դϴ�.\n");
    }
}
