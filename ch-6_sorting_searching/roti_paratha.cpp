#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Check if possible to cook p pratas in  time
bool canCook(vector<int>& ranks, int p, int time) {
  
  int total =0; // initial parata
  for(int i = 0; i < ranks.size(); i++){
    int R = ranks[i];
        int t = 0;
        int j = 1;
        // count  paratas  cook can make
        while(true) {
            t += j * R;
            if(t > time) break;
            total++;
            j++;
        }

        if(total >= p) return true;
    }

    return false;
  }
  int minTimeToCookPratas(int p, vector<int>& ranks){
    int low = 0;

    int maxRank = *min_element(ranks.begin(), ranks.end());
    int high = maxRank * (p * (p + 1)) / 2;
  }


    

    