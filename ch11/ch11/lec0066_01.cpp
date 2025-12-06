// 66. https://youtu.be/EuYdn_STq9U&t=8s
#include <iostream>

int main() {
  int * a = new int(5);
  int * b = new int(3);

  *a = *b;

  delete a;
  delete b;
}
