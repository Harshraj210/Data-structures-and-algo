#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() {  // virtual
        cout << "Generic drawing" << endl;
    }
};

class circle : public shape {
public:
    void draw() override {  // override (optional but good)
        cout << "circle drawing" << endl;
    }
};

class rectangle : public shape {
public:
    void draw() override final  { // cannot be overridden further
        cout << "rectangle drawing" << endl;
    }
};

void shape_draw(shape* s) {
    s->draw();  // runtime decision
}

int main() {
     shape s;
    circle c;
    rectangle r;

    cout << "Direct calls:" << endl;
    s.draw();
    c.draw();
    r.draw();

    cout << "\nRuntime polymorphism:" << endl;
    shape_draw(&c);  // circle version
    shape_draw(&r);

    return 0;
}
// final --> No further overriding allowed
// virtual --> Call the function based on the real object type at runtime