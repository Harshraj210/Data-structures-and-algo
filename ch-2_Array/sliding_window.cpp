#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k){

    int windowSum = 0;

    // first window
    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    // sliding window
    for(int i = k; i < nums.size(); i++){

        windowSum = windowSum + nums[i];   // add new element
        windowSum = windowSum - nums[i-k]; // remove old element

        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main(){

    vector<int> nums = {2,1,5,1,3,2};

    cout << maxSumSubarray(nums,3);

}