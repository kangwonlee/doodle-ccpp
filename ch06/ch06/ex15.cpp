// 35. https://youtu.be/mMLcTPKC6o8&t=7s
#include <stdio.h>

// Do not run : stack overflow
void rec() {
    printf("rec() »£√‚µ \n");
    rec();
}

int main() {
    rec();
}
