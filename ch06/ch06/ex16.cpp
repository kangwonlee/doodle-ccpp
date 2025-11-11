// 35. https://youtu.be/mMLcTPKC6o8&t=7s
#include <stdio.h>

// Do not run : stack overflow
void rec(const int n) {
    printf("n = %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
}
