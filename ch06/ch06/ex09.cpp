#include <stdio.h>

int itemCnt = 0;
int money = 100;

int buyItem(int cost) {
    if (money < cost) {
        return -1;
    }

    itemCnt++;
    money -= cost;
    printf("�������� �����߽��ϴ�.\n");
    printf("  ������ ����: %d\n", itemCnt);
    printf("  �ܾ�: %d\n", money);
    return 0;
}

int main() {
    buyItem(50);
    int result = buyItem(70);  // buyItem �Լ��� ���� ���� result�� ����
    if (result == -1) {        // result�� -1�̸� �޽����� ���
        printf("�ܾ��� �����մϴ�!\n");
        printf("  ������ ����: %d\n", itemCnt);
        printf("  �ܾ�: %d\n", money);
    }
}
