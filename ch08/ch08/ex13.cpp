#include <stdio.h>
// 47. https://youtu.be/K08uNEtlqTg&t=7

int main() {
    FILE* in;
    FILE* out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    int n;
    fscanf(in, "%d", &n);
    fprintf(out, "%d\n", n);
}
