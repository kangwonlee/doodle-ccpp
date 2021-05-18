#include <iostream>
using namespace std;

struct Person {
    int age;  // ����
    virtual ~Person() {}  // ������ Ŭ������ ������ֱ� ���� ���� �Ҹ���
    void Eat() {
        cout << "�Դ´�..." << endl;
    }
};
struct Student : virtual Person {  // ���� ���
    void Study() {
        cout << "�����Ѵ�..." << endl;
    }
};
struct Worker : virtual Person {   // ���� ���
    void Work() {
        cout << "���Ѵ�..." << endl;
    }
};
struct Researcher : Student, Worker {

};

int main() {
    Researcher r;
    r.age = 20;

    cout << r.age << endl;
    cout << r.Student::age << endl;
    cout << r.Worker::age << endl;
    cout << r.Person::age << endl;

    r.Eat();
}
