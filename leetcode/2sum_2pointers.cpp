#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){

    int left = 0;
    int right = nums.size() - 1;

    while(left < right){

        int sum = nums[left] + nums[right];

        if(sum == target){
            return {left, right};   // returning indexes
        }

        else if(sum < target){
            left++;
        }

        else{
            right--;
        }
    }

    return {-1,-1};
}

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 18;

    vector<int> result = twoSum(nums, target);

    cout << "Indexes: " << result[0] << " " << result[1] << endl;

}