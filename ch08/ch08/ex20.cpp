#include <stdio.h>
#include <string.h>

int main() {
    int a;
    printf("���� �Է� : ");
    scanf("%d", &a);

    char sa[10];
    sprintf(sa, "%d", a);  // ���� a�� ���ڿ� sa�� ��ȯ�ȴ�.

    int len = strlen(sa);  // ���ڿ� sa�� ���̰� �ٷ� a�� �ڸ����� ����.
    printf("%d��(��) %d�ڸ� ���Դϴ�.\n", a, len);
}
