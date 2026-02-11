#include <algorithm>
#include <iostream>
#include <list>
#include<forward_list>

#include <vector>
using namespace std;
int main() {
    vector<int> first;
    first.push_back(1);
    first.push_back(4);
    first.push_back(3);
    auto it = first.begin();
    // bidirectionl -->read write forwrd inc.

    while(it!=first.end()){
      *it=*it +2;
      cout<<*it<<" ";
      it++;
    }

    // while (it != first.end()) {
    //     cout << *it << " ";
    //     it++;
    // }
    return 0;
}