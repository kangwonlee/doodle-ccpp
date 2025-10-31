#include <stdio.h>

int main() {
  const int arr[4] = {1, 2, 3, 4};
  const int *ptr[4] = {NULL};

  for (int i = 0; i < 4; i++) {
    ptr[i] = arr + i;
  }

  for (int i = 0; i < 4; i++) {
    printf("*(ptr[%d]) = %d\n", i, *(ptr[i]));
  }
}
