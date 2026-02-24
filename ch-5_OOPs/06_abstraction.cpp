#include <iostream>
using namespace std;

// Abstract class
class shape {
public:
    // pure virtual function
    virtual void draw() = 0;
};

// Derived class
class circle : public shape {
public:
    void draw() override {
        cout << "Drawing circle" << endl;
    }
};

class rectangle : public shape {
public:
    void draw() override {
        cout << "Drawing rectangle" << endl;
    }
};

int main() {
    shape* s1 = new circle();
    shape* s2 = new rectangle();

    s1->draw();
    s2->draw();
}