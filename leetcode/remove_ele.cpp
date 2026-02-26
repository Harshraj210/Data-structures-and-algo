#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = remove(nums.begin(), nums.end(), val);
        return it - nums.begin();
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = sol.removeElement(nums, val);

    cout << "k:" << k << endl;
    cout << "after rem,oving";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}