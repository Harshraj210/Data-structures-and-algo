#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {

        int ans = -1;
        int min = INT_MAX;

        for(int i = 0; i < capacity.size(); i++) {

            if(capacity[i] >= itemSize) {

                if(capacity[i] < min) {
                    min = capacity[i];
                    ans = i;
                }
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> capacity = {1,5,3,7};
    int itemSize = 3;

    int result = obj.minimumIndex(capacity, itemSize);

    cout << "Answer  " << result << endl;

    return 0;
}