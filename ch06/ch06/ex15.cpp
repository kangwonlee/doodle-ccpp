#include <stdio.h>
// https://youtu.be/mMLcTPKC6o8

void rec() {
    printf("rec() »£√‚µ \n");
    rec();
}

int main() {
    rec();
}
