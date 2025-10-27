#include <stdio.h>

int main() {
    // 정수 변수 a를 정의하고 10으로 초기화
    int a = 10;
    // 포인터 선언. (현재는 가리키는 것에 별 뜻 없다는 의미로) NULL 값으로 초기화
    int* ptr_a = NULL;
    // ptr_a에 a의 주솟값 저장
    ptr_a = &a;

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %d\n", &a);
    printf("ptr_a의 값 : %d\n", ptr_a);
}
