// 32. https://youtu.be/sf6tCBfv_0E&t=7
#include <stdio.h>

int noMeaning() {
    printf("first\n");
    return 1;
    printf("second\n");
    return 2;
}

int main() {
    //const int ret = noMeaning();  // noMeaning 함수의 리턴 값을 저장
    printf("%d\n", noMeaning());
}
