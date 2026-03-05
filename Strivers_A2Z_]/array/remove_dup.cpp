#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int i = 0;

    for(int j = 1; j < nums.size(); j++) {

        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {

    vector<int> nums = {0,0,3,3,5,6};

    int k = removeDuplicates(nums);

    cout << "Unique count: " << k << endl;

    cout << "Array: ";

    for(int i = 0; i < k; i++)
        cout << nums[i] << " ";
}