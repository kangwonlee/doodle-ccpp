// 56. https://www.youtube.com/watch?v=YL8SgKEyRu4&t=26s
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {  // 积己磊
        cout << "Constructor called" << endl;
    }
    ~MyClass() {  // 家戈磊
        cout << "Destructor called" << endl;
    }
};

// MyClass globalObj;  // 傈开 按眉(泪矫 林籍 贸府)

void testLocalObj() {
    cout << "=== function testLocalObj start ===" << endl;
    MyClass localObj;  // 瘤开 按眉
    cout << "=== function testLocalObj end ===" << endl;
}

int main() {
    cout << "=== main function start ===" << endl;
    testLocalObj();
    cout << "=== main function end ===" << endl;
}
