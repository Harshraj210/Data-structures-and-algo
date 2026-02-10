#include <iostream>
// Algorithms are like a collection of pre-written recipes that perform common tasks for you so you don't have to write
// complex loops from scratch every time.
#include <algorithm>
#include <vector>
using namespace std;

void doubleValue(int a) {
    cout << 2 * a << " ";
}
bool iseven (int a){
  return a%2==0;
}
int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 60;
    arr[3] = 5;
    // no ned of writing complex forloop
    // for_each(arr.begin(), arr.end(), doubleValue);

    int target = 10;
    // vector<int>::iterator it = find(arr.begin(), arr.end(), target);
    // Ugly and hard to read

    // auto it = find(arr.begin(), arr.end(), target);
    // cout << *it << " ";

    // auto it = find_if(arr.begin(), arr.end(), iseven);
    // // it gives only the first value in array
    // cout<<*it<<" ";


    // sort(arr.begin(),arr.end());
    // for(int a: arr){
    //   cout<<a<<" ";
    // }

    
    // rotate(arr.begin(),arr.begin()+3,arr.end());
    //  for(int a: arr){
    //    cout<<a<<" ";
    //  }

    auto it = partition(arr.begin(),arr.end(),iseven);
    // it aprts even and odd no. as functioon is evem defined
    for (int a:arr){
      cout<<a<<" ";
    }


    return 0;
}
