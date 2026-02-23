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
    void draw() override {
        cout << "rectangle drawing" << endl;
    }
};

void shape_draw(shape* s) {
    s->draw();  // runtime decision
}

int main() {
    circle c;
    rectangle r;

    shape_draw(&c);
    shape_draw(&r);

    return 0;
}