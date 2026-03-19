#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {

    int n = nums.size();

    if(n == 1) return 0;

    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;

    int s = 1, e = n-2;

    while(s <= e){

        int mid = s + (e - s) / 2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
            return mid;

        else if(nums[mid] < nums[mid+1])
            s = mid + 1;

        else
            e = mid - 1;
    }

    return -1;
}

int main() {

    vector<int> nums = {1,2,3,1,3};

    int peakIndex = findPeakElement(nums);

    cout << "Peak index: " << peakIndex << endl;

    return 0;
}