#include <stdio.h>

int main() {
    // ���� ���� a�� �����ϰ� 10���� �ʱ�ȭ
    const int a = 7;
    // ������ ����. (����� ����Ű�� �Ϳ� �� �� ���ٴ� �ǹ̷�) NULL ������ �ʱ�ȭ
    const int* ptr_a = NULL;
    // ptr_a�� a�� �ּڰ� ����
    ptr_a = &a;

    printf("a     = %lx\n", (long int) a);
    printf("&(a)  = %lx\n", (long int) &a);
    printf("ptr_a = %lx\n", (long int) ptr_a);
}
