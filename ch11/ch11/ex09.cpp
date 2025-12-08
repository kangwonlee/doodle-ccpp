// 72. https://youtu.be/G6mi7za8JbE&t=8s

#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    Item() { }
    Item(const int num) : num(num) { }
    Item(const string name) : name(name) { }
    Item(const int num, const string name) : num(num), name(name) { }

    operator int() const {
        cout << "Item::operator int()" << endl;
        return num;
    }
    operator string() const {
        cout << "Item::operator string()" << endl;
        return name;
    }

private:
    int num;
    string name;
};

int main() {
    Item i1(1, "Stone");
    const int inum = i1;      // int inum = (int)i1;
    const string iname = i1;  // string iname = (string)i1;

    cout << inum << endl;
    cout << iname << endl;
    cout << "i1 = " << i1 << endl;
}
