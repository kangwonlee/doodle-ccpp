// 28. https://youtu.be/Y-0KlEy6yxs&t=7s
#include <stdio.h>

int main() {
    const char *str[] = { "hello", "world", "doodle", "google" };
    const char* ptr[4] = {NULL};

    for (int i = 0; i < 4; i++) {
        ptr[i] = str[i];
    }
    for (int i = 0; i < 4; i++) {
        printf("%ld\t%s\n", (long) ptr[i], ptr[i]);
    }
}
