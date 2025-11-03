#include <stdio.h>

int main() {
  int m = 3;
  int n = 4;
  int a[m][n]; 
  // int a[n] = {0}; //unable to initialize like this
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = (i + 1) * 10 + (j+1);
    }
  }
  // 
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
  return 0;
}
