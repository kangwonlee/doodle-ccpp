// 53. https://youtu.be/Z3moDffp6sk&t=8s
#include <iostream>
using namespace std;

namespace doodle {
    int n;
    void set() {
        n = 20;
    }
}

int main() {
    using namespace doodle;

    set();
    cout << n << endl;
}
