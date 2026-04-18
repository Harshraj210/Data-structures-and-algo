#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool canplace(vector<int>& stall, int k, int dist) {
    // first cow
    int count = 1;

    int last = stall[0];
    for (int i = 1; i < stall.size(); i++) {
        if (stall[i] - last >= dist) {
            count++;
            last = stall[i];
        }
        // placced all cows
        if (count >= k) {
            return true;
        }
    }
    return false;
}
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    // largest distance
    int high = stalls.back() - stalls.front();
    int ans = 0;
    // binary search
    while (low <= high) {
        int mid = (low + high) / 2;

        if (canplace(stalls, k, mid)) {
            ans = mid;
            low = mid + 1;  // try bigger distance
        } else {
            high = mid - 1;  // reduce distance
        }
    }
    return ans;
}
int main() {
    int n, k;

    cout << "Enter number of stalls: ";
    cin >> n;

    vector<int> stalls(n);

    cout << "Enter stall positions:\n";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    cout << "Enter number of cows: ";
    cin >> k;

    int result = aggressiveCows(stalls, k);

    cout << "Maximum minimum distance  " << result << endl;

    return 0;
}
