#include <iostream>
using namespace std;
class box {
    // ctor can be private
    box(int _width) {
        width = _width;
    }

public:
    int width;
    int getwidth() const {
        return width;
    }
    void setwwidth(int _val) {
        width = _val;
    }
    friend class box_factory;
};
class box_factory {
    int count;

public:
    box getabox(int _w) {
        ++count;
        return box(_w);
    }
};

int main() {
    box_factory bfact;
    box b = bfact.getabox(5);
    cout << b.getwidth() << endl;
    return 0;
}