#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int leftSum = 0;
            int rightProduct = 1;

            // left sum
            for(int j = 0; j < i; j++) {
                leftSum += nums[j];
            }

            //  right product
            for(int j = i + 1; j < n; j++) {
                rightProduct *= nums[j];
            }

            if(leftSum == rightProduct) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {2,8,2,2,5};

    int result = obj.smallestBalancedIndex(nums);

    cout << "smallest Balanced Index: " << result;

    return 0;
}