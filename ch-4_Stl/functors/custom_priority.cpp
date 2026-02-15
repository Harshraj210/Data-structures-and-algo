#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

class student {
    // private
public:
    int marks;
    string name;

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
    // public class
    
public:
// operator overload 
    bool operator()(student a, student b) {
        return a.marks < b.marks; 
    }
};

int main() {

    priority_queue<student, vector<student>, comparator> pq;

    pq.push(student(99,"Harsh"));
    pq.push(student(95,"SADSA"));
    pq.push(student(92,"hhs"));

    cout << pq.top().marks << " " << pq.top().name;

    return 0;
}
