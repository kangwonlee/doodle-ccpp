// 66. https://youtu.be/EuYdn_STq9U&t=8s
#include <iostream>

int main() {
  int * a = new int(5);
  int * b = new int(3);

  // don't do this!
  a = b;
  // memory leak occurs here
  // new int(5) is lost, can't be deleted

  delete a;
  // now below is double free
  delete b;
}
