#include <stdio.h>
// https://youtu.be/mMLcTPKC6o8

// Do not run : stack overflow
void rec() {
    printf("rec() »£√‚µ \n");
    rec();
}

int main() {
    rec();
}
