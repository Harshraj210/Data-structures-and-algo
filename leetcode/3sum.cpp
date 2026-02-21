#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // no duplicate
        set<vector<int>> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                for(int k = j+1; k < nums.size(); k++) {
                  // i<j<k
                    // target sum 0
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> t = {nums[i], nums[j], nums[k]};
                        sort(t.begin(), t.end());
                        ans.insert(t);
                    }
                }
            }
        }
        
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
int main() {
    Solution s;

  
    vector<int> nums = {-1,0,1,2,-1,-4};

    auto ans = s.threeSum(nums);

    cout << "Triplets:\n";
    for(auto &v : ans){
        for(int x : v) cout << x << " ";
        cout << endl;
    }
}