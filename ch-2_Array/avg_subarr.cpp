#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {

    int windowSum = 0;

    // First window of size k
    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }
    // current sum

    int maxSum = windowSum;

    // Slide the window
    for(int i = k; i < nums.size(); i++){

        windowSum += nums[i];      // add new element
        windowSum -= nums[i-k];    // remove old element

        if(windowSum > maxSum){
            maxSum = windowSum;
        }
    }

    return (double)maxSum / k;
}

int main(){

    vector<int> nums = {1,12,-5,-6,50,3};
    // window size
    int k = 4;

    cout << findMaxAverage(nums, k);

    return 0;
}