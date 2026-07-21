class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if (prices.size() == 0)
            return 0;

        vector<int> max_buy(prices.size());

        max_buy[0] = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            max_buy[i] = min(max_buy[i - 1], prices[i]);
        }

        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            int curr_profit = prices[i] - max_buy[i];
            max_profit = max(max_profit, curr_profit);
        }

        return max_profit;
    }
};