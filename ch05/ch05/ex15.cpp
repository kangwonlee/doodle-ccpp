#include <stdio.h>
#include <string.h>

int main() {
    char greeting[100] = "Hello, ";  // �λ縻�� ������ �迭
    char name[100];                  // �̸��� �Է¹��� �迭

    scanf("%s", name);

    strcat(greeting, name);  // greeting�� name�� ���빰�� �̾� ���δ�.
    strcat(greeting, "!");   // greeting�� "!"��� ����� ���ڿ��� �̾� ���δ�.

    printf("%s", greeting);
}
