#include <algorithm>
#include <iostream>
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
    for_each(arr.begin(), arr.end(), doubleValue);
    return 0;
}
