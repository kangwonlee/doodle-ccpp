#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = {0};

    strcpy(s, "hello");  // s�� "hello"��� ����� ���ڿ��� �����Ѵ�.
    // s ���� ª�� ���ڿ��� �����ϵ��� ���� �ٶ��ϴ�.
    printf("s: %s\n", s);
}
