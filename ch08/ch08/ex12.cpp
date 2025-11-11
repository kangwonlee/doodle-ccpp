#include <stdio.h>
// 47. https://youtu.be/K08uNEtlqTg&t=7

int main() {
    FILE* in;
    in = fopen("input.txt", "r");

    int n;
    fscanf(in, "%d", &n);
    printf("%d\n", n);
}
