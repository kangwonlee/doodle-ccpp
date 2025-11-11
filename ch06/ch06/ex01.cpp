// 31. https://youtu.be/qD1QtFTeAoM&t=39
#include <stdio.h>
// 이 파일을 같은 폴더의 ex02.cpp, ex03.cpp, ex04.cpp
// 파일과 비교 바랍니다.

int main() {
    int itemCnt = 0;
    int money = 100;

    itemCnt++;
    money -= 10;
    printf("아이템을 구매했습니다.\n");
    printf("  아이템 개수: %d\n", itemCnt);
    printf("  잔액: %d\n", money);

    // (이 부분에는 다른 코드가 많이 있다고 가정합니다.)

    itemCnt++;
    money -= 10;
    printf("아이템을 구매했습니다.\n");
    printf("  아이템 개수: %d\n", itemCnt);
    printf("  잔액: %d\n", money);
}
