#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 60;
    arr[3] = 5;
    arr[4] = 0;

    // sort(arr.begin(), arr.end());  

    // int target = 10;
    // bool found = binary_search(arr.begin(), arr.end(), target);

    // if(found)
    //     cout << "Element found";
    // else
    //     cout << "Element not found";
    int target = 55;
    auto it = lower_bound(arr.begin(), arr.end(), target);
    cout<<*it <<endl;

    return 0;
}
