#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class ccomap {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(20);
    sort(arr.begin(), arr.end(), ccomap());
    for (int a : arr) {
        cout << a << endl;
    }
    return 0;
}
