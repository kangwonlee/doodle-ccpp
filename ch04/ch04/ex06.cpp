#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {  // if��
        if (b > c) {  // if��
            printf("%d %d %d\n", a, b, c);
        }
        else {  // else��
            if (a > c) {  // if��
                printf("%d %d %d\n", a, c, b);
            }
            else {  // else��
                printf("%d %d %d\n", c, a, b);
            }
        }
    }
    else {  // else��
        if (a > c) {  // if��
            printf("%d %d %d\n", b, a, c);
        }
        else {  // else��
            if (b > c) {  // if��
                printf("%d %d %d\n", b, c, a);
            }
            else {  // else��
                printf("%d %d %d\n", c, b, a);
            }
        }
    }
}
