#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canEat(vector<int>& piles, int h, int k){
    long long hours = 0;

    for(int pile : piles){
        hours += (pile + k - 1) / k;
    }

    return hours <= h;
}

int minEatingSpeed(vector<int>& piles, int h){

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while(low < high){
        int mid = low + (high - low)/2;

        if(canEat(piles, h, mid)){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;

    cout << minEatingSpeed(piles, h);

    return 0;
}