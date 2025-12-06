// 71. https://youtu.be/p-HwpKOpaAs&t=37s
#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    Item() {
        cout << "Item()" << endl;
    }
    Item(const int num) : num(num) {
        cout << "Item(int)" << endl;
    }
    Item(const string name) : name(name) {
        cout << "Item(string)" << endl;
    }
    Item(const int num, const string name) : num(num), name(name) {
        cout << "Item(int, string)" << endl;
    }

private:
    int num;
    string name;
};

int main() {
    cout << "===== A =====" << endl;
    Item a1 = Item(1);
    Item a2(2);
    Item a3 = (Item)3;
    Item a4 = 4;
    Item a5, a6, a7;
    a5 = Item(5);
    a6 = 6; // Implicit conversion
    a7 = (Item)7; // Explicit conversion

    cout << "===== B =====" << endl;
    Item b4 = string("Stone");

    cout << "===== C =====" << endl;
    Item c1 = Item(1, "Stone");
    Item c2(2, "Dirt");
    Item c4 = { 3, "Wood" }; // Implicit conversion
    Item c5, c6;
    c5 = Item(4, "Grass");
    c6 = { 5, "Water" }; // Implicit conversion
}
