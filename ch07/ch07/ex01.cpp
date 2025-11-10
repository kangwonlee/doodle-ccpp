#include <stdio.h>
// 39. https://youtu.be/hjRShGENaow

int main() {
    struct { float x, y; } pos;

    pos.x = 1.5;
    pos.y = 2.2;
    printf("좌표 : (%f, %f)\n", pos.x, pos.y);
}
