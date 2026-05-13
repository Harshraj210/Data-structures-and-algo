#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int solve(int amount, vector<int>& coins, int index) {
        if (amount == 0) {
            return 1;
        }

        if (amount < 0) {
            return 0;
        }

        if (index >= coins.size()) {
            return 0;
        }
            // same coin use krne pr anmount decrerase
        int include = solve(amount - coins[index], coins, index);
        // exclude lkkrne pr amount same
        int exclude = solve(amount, coins, index + 1);

        return include + exclude;
    }

    int change(int amount, vector<int>& coins) {
        return solve(amount, coins, 0);
    }
};

int main() {
    Solution obj;

    vector<int> coins = {1, 2, 5};

    int amount = 5;

    cout << obj.change(amount, coins);

    return 0;
}