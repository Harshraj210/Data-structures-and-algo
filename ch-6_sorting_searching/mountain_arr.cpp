#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int left = 0;
    int right = arr.size()-1;

    while(left < right){

        int mid = left + (right-left)/2;

        if(arr[mid] < arr[mid+1]){
            left = mid + 1;
        }
        else{
            right = mid;
        }

    }

    return left;
}

int main(){

    vector<int> arr = {0,2,5,3,1};

    cout << peakIndexInMountainArray(arr);

}