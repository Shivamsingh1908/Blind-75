#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int profit = 0;

        for (int i = 1; i < n; i++) {
            int diff = prices[i] - mini;
            profit = max(profit, diff);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
