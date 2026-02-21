#include <iostream>
using namespace std;
class Studennt {
    // public main me acees
public:
    // attributes
    int marks;
    int nos;
    string name;
    int id;
    // ctor:default
    Studennt() {
        cout < < < "Ctor" << endl;
    }
    void study() {
        cout << "study" << endl;
    }

    void sleep() {
        cout << this->name << "sleep" << endl;
    }
    // destructor
    ~Studennt() {
        cout << "Detor" << endl;
    }
}
