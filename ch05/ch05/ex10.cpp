#include <stdio.h>

int main() {
    char s[] = "doodle";

    printf("%c\n", s[0]);  // s�� 0�� ĭ ���
    s[0] = 'g';            // s�� 0�� ĭ�� 'g'�� ����
    s[3] = 'g';
    printf("%s\n", s);     // �ٲ� s�� ���빰 ���
}
