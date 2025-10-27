#include <stdio.h>
#include <string.h>

int main() {
    // 배열 칸수는 100이지만 문자열의 길이는 5
    const char s[100] = {'h','e','l','l','o', '\0', [6 ... 99] = -1};
    const int len = strlen(s);    // strlen 함수가 돌려준 값을 len에 저장

    printf("배열의 칸수: %d\n", sizeof(s) / sizeof(char));
    printf("문자열의 길이: %d\n", len);

    for (int i = 0; i < 100; i+=10) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", (int)s[i+j]);
        }
        puts("");
    }
    // https://www.digitalocean.com/community/tutorials/initialize-an-array-in-c
}
