#include <stdio.h>

int main() {
    int score;
    printf("���� �Է� : ");
    scanf("%d", &score);

    if (score >= 90) {  // 90�� �̻����� Ȯ��
        printf("A\n");
    }
    else if (score >= 80) {  // 90�� �̻��� �ƴ϶�� 80�� �̻����� Ȯ��
        printf("B\n");
    }
    else if (score >= 70) {  // 80�� �̻��� �ƴ϶�� 70�� �̻����� Ȯ��
        printf("C\n");
    }
    else if (score >= 60) {  // 70�� �̻��� �ƴ϶�� 60�� �̻����� Ȯ��
        printf("D\n");
    }
    else {  // 60�� �̻� �ƴ϶�� F�� ���
        printf("F\n");
    }
}
