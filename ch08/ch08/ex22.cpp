#include <stdio.h>
#include <stdlib.h>  // ��Ŭ����ϴ� ���� ���� �� ��!

int main() {
    for (int i = 1; i <= 5; i++)
        printf("%d\n", rand() % 10 + 1);
}
