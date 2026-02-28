#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
  // 1 st day profit 0
    int minPrice = prices[0];
    // best prfit
    int maxProfit = 0;
  // check each day
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] < minPrice)
        // selling today gives profit
            minPrice = prices[i];
        else
            maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << "Max Profit: " << maxProfit(prices) << endl;

    return 0;
}