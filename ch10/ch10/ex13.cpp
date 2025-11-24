// 61. https://www.youtube.com/watch?v=QaCpk53KuNg&t=8s
#include <iostream>
using namespace std;

class Vector2 {
public:
    Vector2();
    Vector2(const float x, const float y);
    float GetX() const;
    float GetY() const;

private:
    float x, y;
};

int main() {
    Vector2 a(2, 3);
    cout << "a = (" << a.GetX() << ", " << a.GetY() << ")" << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
