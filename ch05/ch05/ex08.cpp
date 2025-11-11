// 23. https://youtu.be/voct7BVMqdA&t=7s
#include <stdio.h>

int main() {
    const char s[] = "Hello, world !";
    //                12345678901234
    const int n = sizeof(s) / sizeof(s[0]);

    printf("n = %d\n", n);
    printf("%s\n", s);  // 문자열 전체가 한 번에 출력된다.
    for (int i = 0; i < n; i++) {
      printf("s[%2d] = %c (ASCII %04x)\n", i, (s[i]), (int) s[i]);
    }

    puts("Null Terminated String");

    printf("s       = %lx\n", (long) s);
    printf("&(s[0]) = %lx\n", (long) &(s[0]));
}
