#include <stdio.h>
// 44. https://www.youtube.com/watch?v=nSxNgDJEnN0&t=7s
const double PI = 3.14159265358979;  // PI는 상수로 선언

double getArea(const double r) {
    return PI * r * r;
}

int main() {
    printf("%f", getArea(10));  // 반지름이 10인 원의 넓이를 출력
}
