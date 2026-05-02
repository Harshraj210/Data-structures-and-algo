#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* p = &x;     // pointer
    int** dp = &p;   // double pointer

    cout << x << endl;     // 10
    cout << *p << endl;    // 10
    cout << **dp << endl;  // 10
}