#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello";  // �迭 ĭ���� 100������ ���ڿ��� ���̴� 5
    int len = strlen(s);    // strlen �Լ��� ������ ���� len�� ����

    printf("�迭�� ĭ��: %d\n", sizeof(s) / sizeof(char));
    printf("���ڿ��� ����: %d\n", len);
}
