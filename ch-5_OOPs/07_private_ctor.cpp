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
        return box(_w);
    }
};

int main() {
    return 0;
}