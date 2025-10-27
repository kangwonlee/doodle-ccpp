#include <stdio.h>

int main() {
    const char s[] = "Hello, world !";
    //                12345678901234
    const int n = sizeof(s) / sizeof(s[0]);

    printf("n = %d\n", n);
    printf("%s\n", s);  // ���ڿ� ��ü�� �� ���� ��µȴ�.
    for (int i = 0; i < n; i++) {
      printf("s[%2d] = %c (ASCII %04x)\n", i, (s[i]), (int) s[i]);
    }
    puts("Null Terminated String");
    //printf("(s[0]) = c\n", (s[0]));
    //printf("s = %x\n", (int) s);
    //printf("&(s[0]) = %x\n", (int) &(s[0]));
}
