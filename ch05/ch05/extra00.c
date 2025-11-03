#include <stdio.h>

int main() {

  int n = 10;
  int a[n]; 
  // int a[n] = {0}; //unable to initialize like this
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  // 
  for (int i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  } 
  return 0;
}
