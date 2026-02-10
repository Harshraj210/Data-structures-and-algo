#include <iostream>
#include<numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 60;
    arr[3] = 5;
    int totalsum = accumulate(arr.begin (),arr.end(),0);
    cout<<totalsum<<" ";
    
    return 0;
}