#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, tmp = 0;
        for(int i = 1; i < prices.size(); i++){
            tmp += prices[i] - prices[i-1];
            tmp = max(prices[i] - prices[i-1], tmp);
            profit = max(profit, tmp);
        }
        return profit;
    }
};