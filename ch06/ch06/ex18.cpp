#include <stdio.h>

int fact(int n) {
    if (n == 1) return 1;  // n�� 1�� �� 1�� �����Ѵ�.
    return n * fact(n - 1);
}

int main() {
    int n;

    printf("���� �Է� : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
}
