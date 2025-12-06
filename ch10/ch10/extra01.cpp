#include <iostream>
using namespace std;

struct Base {
    int x;
};

// struct는 기본적으로 public 상속을 수행함
struct Derived : Base {
    int y;
};

int main() {
    Derived d;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7};
    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    d.x = 10; // public 상속이므로 외부에서 Base의 멤버 x에 접근 가능
    cout << "d.x: " << d.x << endl;
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; ++j) {
          cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
    cout << ar + 1 << endl; // 배열의 첫 번째 요소의 주소 출력
    cout << (ar[1]) << endl; // 배열의 첫 번째 요소의 주소 출력
    cout << &(ar[1]) << endl; // 배열의 첫 번째 요소의 주소 출력
    cout << (&ar)[1] << endl; // 배열의 첫 번째 요소의 주소 출력
    cout << ar + 10 << endl; // 배열의 첫 번째 요소의 주소 출력
    return 0;
}
