#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        int n;
        scanf("%d", &n);
        if (n < 0) {   // ������ �ԷµǸ�
            printf("INPUT ERROR\n");
            return 0;  // ���α׷��� �ٷ� �����Ѵ�.
        }
        sum += n;
    }
    printf("��: %d\n", sum);  // for�� �ȿ��� �� ���� ������� ���� ��� �հ踦 ���
}
