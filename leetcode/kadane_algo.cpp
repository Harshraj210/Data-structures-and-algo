// continous sum of max sub array
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums){
  // stores max sum
    int maxSum = nums[0];
    int currentSum = 0;

    for(int num : nums){
      // If the sum becomes negative  adding will make less
        if(currentSum < 0)
        // reset the current sum
            currentSum = 0;

        currentSum += num;

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << maxSubArray(nums);

}