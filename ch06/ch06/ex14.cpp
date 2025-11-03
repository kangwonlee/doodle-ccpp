#include <stdio.h>
// https://youtu.be/k3BGMbOvpCI

// 함수 프로토타입 선언
void walk(const int distance);
void rotate(const int angle);
void walkSquare();

// main 함수 정의
int main() {
    walkSquare();  // 위에서 walkSquare 함수가 정의되었으므로 에러가 나지 않는다!
}

// 위의 세 함수의 정의
void walk(const int distance) {
    printf("%dcm 앞으로 전진했습니다.\n", distance);
}

void rotate(const int angle) {
    printf("%d도 회전했습니다.\n", angle);
}

void walkSquare() {
    for (int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
