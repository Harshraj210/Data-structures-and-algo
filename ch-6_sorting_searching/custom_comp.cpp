#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
bool mycomp(int &a, int &b) {
    return a > b;
}
int main() {
    vector<int> v = {3, 2, 1, 6, 7, 6};

    sort(v.begin(), v.end(), mycomp);
    for (int num : v) {
        cout << num << endl;
    }
    return 0;
}