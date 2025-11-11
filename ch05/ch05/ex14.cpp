// 23. https://youtu.be/voct7BVMqdA&t=7s
#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = {0};

    strcpy(s, "hello");  // s에 "hello"라는 상수형 문자열을 복사한다.
    // s 보다 짧은 문자열만 복사하도록 제한 바랍니다.
    printf("s: %s\n", s);
}
