#include <stdio.h>
#include <stdlib.h>

// ���� 5���� �Է¹޾� �� ���� �����ϴ� �Լ�
int getSum() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        int n;

        scanf("%d", &n);
        if (n < 0) {
            printf("INPUT ERROR\n");
            // ������ ���α׷��� �� ����ȴ�.
            exit(0);
        }
        sum += n;
    }

    return sum;
}

int main() {
    printf("��: %d\n", getSum());
}
