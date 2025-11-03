#include <stdio.h>
// https://youtu.be/mMLcTPKC6o8

// Do not run : stack overflow
void rec(const int n) {
    printf("n = %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
}
