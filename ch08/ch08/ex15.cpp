// 47. https://youtu.be/K08uNEtlqTg&t=7
#include <stdio.h>

int main() {
    FILE* in;
    in = fopen("input.txt", "r");

    char ch;
    while (fscanf(in, "%c", &ch) != EOF) {
        printf("%c", ch);
    }
}
