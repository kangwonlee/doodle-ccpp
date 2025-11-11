// 35. https://youtu.be/mMLcTPKC6o8&t=7s
#include <stdio.h>

void rec(const int n) {
    if (n > 5) {  // n이 5보다 크면 함수를 종료한다.
        return;
    }
    printf("n = %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
}
