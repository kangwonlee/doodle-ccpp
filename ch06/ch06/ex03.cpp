#include <stdio.h>

int itemCnt = 0;
int money = 100;

void buyItem(int cost) {
    itemCnt++;
    money -= cost;
    printf("�������� �����߽��ϴ�.\n");
    printf("  ������ ����: %d\n", itemCnt);
    printf("  �ܾ�: %d\n", money);
}

int main() {
    buyItem(30);
    buyItem(40);
}
