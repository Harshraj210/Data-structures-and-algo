#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingNumber(vector<int>& nums){

    int n = nums.size();

    unordered_set<int> s(nums.begin(), nums.end());

    for(int i=0;i<=n;i++){
        if(s.count(i)==0){
            return i;
        }
    }

    return -1;
}

int main(){

    vector<int> nums = {3,0,1};

    cout<<missingNumber(nums);

}