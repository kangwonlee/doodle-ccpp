#include <stdio.h>

int main() {
    char s[1000] = {0};

    scanf("%s", s);  // &�� ����!!
    printf("%s\n", s);
}
