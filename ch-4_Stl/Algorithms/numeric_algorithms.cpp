#include <iostream>
#include<numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // vector<int> arr(5);
    // arr[0] = 10;
    // arr[1] = 50;
    // arr[2] = 60;
    // arr[3] = 5;
    // int totalsum = accumulate(arr.begin (),arr.end(),0);
    // // suppose if we 2000 instead of 00 so ans will bhe 2125 , it is just initialization
    // cout<<totalsum<<" ";


    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    // vector<int> second;
    // second.push_back(4);
    // second.push_back(5);
    // second.push_back(6);
    // int ans = inner_product(first.begin(),first.end(),second.begin(),0);
    // cout<<ans<<endl;
     vector<int> result(first.size());

    partial_sum(first.begin(), first.end(), result.begin());

    for(int x : result) {
        cout << x << " ";
    }


    
    
    return 0;
}