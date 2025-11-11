// 21. https://youtu.be/zS7b-C3wDMI&t=8s
#include <stdio.h>

int main() {
    int n = 0;
    int arr[1000] = {0};

    printf("입력할 숫자의 개수 : ");
    scanf("%d", &n);
    printf("숫자 %d개를 입력하세요 : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("최댓값 : %d\n", max);
}
