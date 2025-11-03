#include <stdio.h>
// https://youtu.be/mMLcTPKC6o8

void rec(const int n) {
    printf("n = %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
}
