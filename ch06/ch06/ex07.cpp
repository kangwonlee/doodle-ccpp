#include <stdio.h>

void noMeaning() {
    printf("first\n");
    return;  // �Լ� �ٷ� ����, �Ʒ� ��ɵ��� ������� �ʴ´�.
    printf("second\n");
    return;
}

int main() {
    noMeaning();
}
