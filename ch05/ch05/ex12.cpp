#include <stdio.h>
#include <string.h>

int main() {
    // �迭 ĭ���� 100������ ���ڿ��� ���̴� 5
    const char s[100] = {'h','e','l','l','o', '\0', [6 ... 99] = -1};
    const int len = strlen(s);    // strlen �Լ��� ������ ���� len�� ����

    printf("�迭�� ĭ��: %d\n", sizeof(s) / sizeof(char));
    printf("���ڿ��� ����: %d\n", len);

    for (int i = 0; i < 100; i+=10) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", (int)s[i+j]);
        }
        puts("");
    }
    // https://www.digitalocean.com/community/tutorials/initialize-an-array-in-c
}
