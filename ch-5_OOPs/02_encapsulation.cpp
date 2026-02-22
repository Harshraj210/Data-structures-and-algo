#include <iostream>
using namespace std;
// Encapsulation is data hiding using private members and controlled access through public methods
class Studennt {
    // public main me acees
public:
    // attributes
    int marks;
    int nos;
    string name;
    int id;
    Studennt(int marks, int nos, string name, int id, float cgp, string gf) {
        cout << "Ctor" << endl;
        this->marks = marks;
        this->nos = nos;
        this->name = name;
        this->id = id;
        this->cgp = cgp;
        this->gf = gf;
    }

private:
    float cgp;
    string gf;
    void study() {
        cout << "study" << endl;
    }

    void sleep() {
        cout << this->name << "sleep" << endl;
    }
    // destructor
    // function that cleans object when destroyed.
    ~Studennt() {
        cout << "Detor" << endl;
    }

private:
    void gf_chat() {
        cout << this->name << "gf cxhat" << endl;
    }