#include <stdio.h>

int main() {
    for (int i = 1; ; i++) {
        int k;

        scanf("%d", &k);
        if (k == 0) {  // �Է¹��� �� k�� 0�̶�� for�� ������ ��������
            break;
        }
        printf("%d��° �Է� ���: %d\n", i, k);
    }
}
