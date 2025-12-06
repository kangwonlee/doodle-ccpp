// 68. https://youtu.be/hsnOQiotbKs&t=8s
#include <iostream>
#include <string>
using namespace std;

class String {
public:
    String() {
        strData = NULL;
        len = 0;
        show("String()");
    }
    String(const char* str) {
        len = strlen(str);
        strData = new char[len + 1];
        strcpy(strData, str);
        show("String(const char*)");
    }
    String(const String& rhs) {  // 복사 생성자
        len = rhs.len;
        strData = new char[len + 1];
        strcpy(strData, rhs.strData);
        show("String(const String&)");
    }
    ~String() {
        if (strData) {
            delete[] strData;
        }
        show("~String()");
    }
    void show(const char* msg="", const char end='\n') const {
        cout << msg << " this : " << this << " strData : " << (void *) strData << end;
    }

    String& operator=(const String& rhs) {  // 복사 대입 연산자
        if (this != &rhs) {
            len = rhs.len;
            delete[] strData;
            strData = new char[len + 1];
            strcpy(strData, rhs.strData);
        }
        show("operator=(const String&)", ' ');
        cout << "rhs : " << &rhs << " rhs.strData : " << (void*)rhs.strData << endl;
        return *this;
    }

    const char* GetStrData() const {
        if (strData) return strData;
        return "";
    }
    int GetLen() const {
        return len;
    }

private:
    char* strData;
    int len;
};

int main() {
    String s1("Hello");
    String s2("World");
    s2 = s1;
    cout << s1.GetStrData() << endl;
    cout << s2.GetStrData() << endl;
}
