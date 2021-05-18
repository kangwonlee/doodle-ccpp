#include <iostream>
using namespace std;

class IPerson {
public:
    virtual ~IPerson() {}
    virtual void Eat() = 0;
    virtual void SetAge(int age) = 0;
    virtual int GetAge() = 0;
};
class IStudent : public virtual IPerson {
public:
    virtual void Study() = 0;
};
class IWorker : public virtual IPerson {
public:
    virtual void Work() = 0;
};
class Researcher : public IStudent, public IWorker {
public:
    void Eat() {
        cout << "�Դ´�..." << endl;
    }
    void Study() {
        cout << "�����Ѵ�..." << endl;
    }
    void Work() {
        cout << "���Ѵ�..." << endl;
    }
    void SetAge(int age) { this->age = age; }
    int GetAge() { return age; }

private:
    int age;
};

int main() {
    Researcher r;
    r.SetAge(20);
    cout << r.GetAge() << endl;

    IPerson* p = new Researcher;
    p->SetAge(20);
    cout << p->GetAge() << endl;
    delete p;
}
