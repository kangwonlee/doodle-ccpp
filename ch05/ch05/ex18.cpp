#include <stdio.h>

int main() {
    // ���� ���� a�� �����ϰ� 10���� �ʱ�ȭ
    int a = 10;
    // ������ ����. (����� ����Ű�� �Ϳ� �� �� ���ٴ� �ǹ̷�) NULL ������ �ʱ�ȭ
    int* ptr_a = NULL;
    // ptr_a�� a�� �ּڰ� ����
    ptr_a = &a;

    printf("a�� �� : %d\n", a);
    printf("a�� �ּڰ� : %d\n", &a);
    printf("ptr_a�� �� : %d\n", ptr_a);
}
