// 53. https://youtu.be/Z3moDffp6sk&t=8s
#include <iostream>
using namespace std;

namespace doodle {
    int m, n;
    void set();
    namespace google {
        int n;
        void set();
    }
}

void doodle::set() {
    n = 20;
}
void doodle::google::set() {
    m = 30;
    n = 40;
}

int main() {
    doodle::set();
    doodle::google::set();

    cout << doodle::m << endl;
    cout << doodle::n << endl;
    cout << doodle::google::n << endl;
}
