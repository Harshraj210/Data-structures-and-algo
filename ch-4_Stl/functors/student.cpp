#include <iostream>
#include <string>
using namespace std;

class student {
public:
    int marks;
    string name;
    // constructor
    student() {
        marks = 0;
        name = "";
    }
    student(int m, string n) {
        this->marks = m;
        this->name = n;
    }
};
class studentCmp{
  public:
    bool operator()(student a, student b){
      return a.marks<b.marks;
    }
};
int main() {
    student s1;
    student s2;
    s1.marks = 99;
    s1.name = "harsh"; s2.name = "pistol"; s2.marks = 98; cout << s1.name << " " << s1.marks << endl;
    cout << s2.name << " " << s2.marks << endl;
}