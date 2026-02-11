#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
class comparator {
  public:
      bool operator()(student a,student b){
        return a.marks<b.marks;
      }
};
int main() {
    vector<student> arr;
    arr.push_back(student(99,"harsh"));
    arr.push_back(student(97,"pistol"));
    sort(arr.begin(), arr.end(),comparator());
    for (student a:arr){
      cout<< a.marks<<" "<<a.name<<endl;
    }
}