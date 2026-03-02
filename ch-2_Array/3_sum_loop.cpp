#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
          // remove dublicates

            if(i > 0 && nums[i] == nums[i-1])
                continue;

            for(int j = i+1; j < n; j++){

                if(j > i+1 && nums[j] == nums[j-1])
                    continue;

                for(int k = j+1; k < n; k++){

                    if(k > j+1 && nums[k] == nums[k-1])
                        continue;

                    int sum = nums[i] + nums[j] + nums[k];
                  // target is 0
                    if(sum == 0){
                        ans.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return ans;
    }
};

int main(){

    Solution s;

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = s.threeSum(nums);

    cout << "Triplets:   \n";
    for(auto &v : res){
        for(int x : v){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}