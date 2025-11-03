#include <stdio.h>
#include <string.h>

int main() {
    const char s1[] = "hello";
    char s2[100] = {0};

    strcpy(s2, s1);  // s2에 s1의 내용물을 복사한다.
    // s 보다 짧은 문자열만 복사하도록 제한 바랍니다.
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
}
