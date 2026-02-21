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
    // parameterised const
    Studennt(int marks, int nos, string name, int id) {
        cout << "Ctor" << endl;
        this->marks = marks;
        this->nos = nos;
        this->name = name;
        this->id = id;
    }
    // pass by refernce
    Studennt(const Studennt &srcopy) {
        cout << "Copy Ctor" << endl;
        this->marks = srcopy.marks;
        this->nos = srcopy.nos;
        this->name = srcopy.name;
        this->id = srcopy.id;
    }
    // methods
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
};
int main() {
    // Studennt s1(99, 5, "harsh", 1);
    // s1.study();
    // Studennt s2=s1;
    // cout<<s2.name<<endl;

    // DMA
    Studennt *s3= new Studennt(99, 5, "aman", 1);
    cout<<s3->name<<endl;
    s3->study();
    delete s3;

    return 0;
}
