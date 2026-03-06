#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    int n = nums.size();

    vector<int> result(n);

    int posIndex = 0;
    int negIndex = 1;

    for(int num : nums){

        if(num > 0){
          // postive no at even place 
            result[posIndex] = num;
            posIndex += 2;
        }
        else{
          // neg no. at odd place
            result[negIndex] = num;
            negIndex += 2;
        }
    }

    return result;
}

int main(){

    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for(int x : ans){
        cout << x << " ";
    }

}