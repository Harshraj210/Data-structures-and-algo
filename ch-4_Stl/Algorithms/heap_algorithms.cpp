#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;
int main (){
   vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    make_heap(first.begin(),first.end());
    for(int a:first){
      cout<<a<<" ";
    }
    return 0;
}