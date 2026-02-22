#include <iostream>
#include <string>
using namespace std;

// Encapsulation: private data + public methods
class Studennt {

public:
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

    void gf_chat() {
        cout << this->name << " gf chat" << endl;
    }

public:
    void setcgp(float a) {
        this->cgp = a;
    }
    //  
    //  const is used --> function will NOT modify the object 
    float getcgp() const {
        return this->cgp;
    }

    string getgf() const {
        return this->gf;
    }

    void sleep() {
        cout << this->name << " sleep" << endl;
    }

    ~Studennt() {
        cout << "Detor" << endl;
    }
};

int main() {
    Studennt A(99, 5, "harsh", 1, 9.8, "hell");

    cout << "CGPA: " << A.getcgp() << endl;
    cout << "GF: " << A.getgf() << endl;

    A.sleep();
}
// Getter = function that reads (gets) private data
// Setter = function that changes (sets) private data