#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> first;
    first.push_back(1);
    first.push_back(4);
    first.push_back(3);
    // heap only gives first [0] to largest element . it doent mean sorting
    make_heap(first.begin(), first.end());
    first.push_back(99);
    push_heap(first.begin(), first.end());
    for (int a : first) {
        cout << a << " ";
    }
    // sort heap
    return 0;
}