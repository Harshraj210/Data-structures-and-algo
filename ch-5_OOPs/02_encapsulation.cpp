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
  private:
    int *cgp;
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