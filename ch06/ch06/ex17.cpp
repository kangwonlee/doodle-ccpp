#include <stdio.h>

void rec(int n) {
    if (n > 5) {  // n�� 5���� ũ�� �Լ��� �����Ѵ�.
        return;
    }
    printf("n = %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
}
