#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canplace(vector<int>& stall,int k,int dist){
  // first cow
  int count =1;
  
  int last = stall[0];
  for(int i =1;i<stall.size();i++){

    if(stall[i]-last>=dist){
      count++;
      last=stall[i];
    }
    // placced all cows
    if(count>=k){
      return true;
    }
  }
  return false;
}
int agreesivecows(vector<int>& stalls, int k){
  sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;
}

