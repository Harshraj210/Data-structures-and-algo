#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingElements(vector<int>& nums){

    int mn = nums[0];
    int mx = nums[0];

    for(int x : nums){
        mn = min(mn, x);
        mx = max(mx, x);
    }

    unordered_set<int> s(nums.begin(), nums.end());

    vector<int> ans;

    for(int i = mn; i <= mx; i++){
        if(s.count(i) == 0){
            ans.push_back(i);
        }
    }

    return ans;
}

int main(){

    vector<int> nums = {1,4,2,5};

    vector<int> res = findMissingElements(nums);

    for(int x : res){
        cout << x << " ";
    }

}