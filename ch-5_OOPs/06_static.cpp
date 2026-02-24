#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
};

int Counter::count = 0;

void test() {
    static int x = 0;
    x++;
    cout << "x=" << x << endl;
}

int main() {
    Counter a, b;
    cout << "count=" << Counter::count << endl;

    test();
    test();
}