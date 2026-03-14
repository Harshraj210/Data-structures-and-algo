#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& nums, int target){

    int left = 0;
    int right = nums.size()-1;
    int ans = -1;

    while(left <= right){

        int mid = left + (right-left)/2;

        if(nums[mid] == target){
            ans = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return ans;
}

int lastOcc(vector<int>& nums, int target){

    int left = 0;
    int right = nums.size()-1;
    int ans = -1;

    while(left <= right){

        int mid = left + (right-left)/2;

        if(nums[mid] == target){
            ans = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int>& nums, int target){

    int first = firstOcc(nums,target);
    int last = lastOcc(nums,target);

    return {first,last};
}

int main(){

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> result = searchRange(nums,target);

    cout << "First  " << result[0] << endl;
    cout << "Last  " << result[1] << endl;

    return 0;
}