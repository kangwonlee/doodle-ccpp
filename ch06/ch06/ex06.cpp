#include <stdio.h>

int noMeaning() {
    printf("first\n");
    return 1;
    printf("second\n");
    return 2;
}

int main() {
    int ret = noMeaning();  // noMeaning �Լ��� ���� ���� ����
    printf("%d\n", ret);
}
