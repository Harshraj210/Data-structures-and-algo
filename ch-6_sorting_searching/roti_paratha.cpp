#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Check if possible to cook p pratas in  time
bool canCook(vector<int>& ranks, int p, int time) {
    int total = 0;  // initial parata
    for (int i = 0; i < ranks.size(); i++) {
        int R = ranks[i];
        int t = 0;
        int j = 1;
        // count  paratas  cook can make
        while (true) {
            t += j * R;
            if (t > time)
                break;
            total++;
            j++;
        }

        if (total >= p)
            return true;
    }

    return false;
}
int minTimeToCookPratas(int p, vector<int>& ranks) {
    int low = 0;
    // returns an iterator (pointer) to the smallest element
    int maxRank = *min_element(ranks.begin(), ranks.end());
    // Maximum time required
    int high = maxRank * (p * (p + 1)) / 2;
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canCook(ranks, p, mid)) {
            ans = mid;
            high = mid - 1;  // try smaller time
        } else {
            low = mid + 1;  // need more time
        }
    }

    return ans;
}
int main() {
    int p = 10;
    vector<int> ranks = {1, 2, 3, 4};

    cout << "Minimum time = " << minTimeToCookPratas(p, ranks) << endl;

    return 0;
}
