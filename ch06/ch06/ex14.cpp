#include <stdio.h>

// �Լ� ������Ÿ�� ����
void walk(int distance);
void rotate(int angle);
void walkSquare();

// main �Լ� ����
int main() {
    walkSquare();  // ������ walkSquare �Լ��� ���ǵǾ����Ƿ� ������ ���� �ʴ´�!
}

// ���� �� �Լ��� ����
void walk(int distance) {
    printf("%dcm ������ �����߽��ϴ�.\n", distance);
}

void rotate(int angle) {
    printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

void walkSquare() {
    for (int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
