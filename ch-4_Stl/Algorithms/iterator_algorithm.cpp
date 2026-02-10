#include <iostream>
// Algorithms are like a collection of pre-written recipes that perform common tasks for you so you don't have to write
// complex loops from scratch every time.
#include <algorithm>
#include <vector>
using namespace std;

void doubleValue(int a) {
    cout << 2 * a << " ";
}
int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    // no ned of writing complex forloop
    // for_each(arr.begin(), arr.end(), doubleValue);

    int target = 10;
    auto it = find(arr.begin(), arr.end(), target);
    cout << *it << " ";
    return 0;
}
