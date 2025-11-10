#include <stdio.h>
// 42. https://youtu.be/T2Mo4nD6Cnc

struct Time {
    int h, m, s;
};

int totalSec(Time t) {
    return 60 * 60 * t.h + 60 * t.m + t.s;
}

int main() {
    Time t = { 1, 22, 48 };

    printf("%d\n", totalSec(t));
}
