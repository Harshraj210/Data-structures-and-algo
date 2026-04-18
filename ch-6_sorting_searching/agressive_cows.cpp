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
  }
}

