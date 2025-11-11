#include <stdio.h>
// 45. https://www.youtube.com/watch?v=taq4xn_ET9s&t=7s

#define SQUARE(X) ((X) * (X))

int main() {
    int a = 5;

    printf("%d", 100 / SQUARE(a));
}
