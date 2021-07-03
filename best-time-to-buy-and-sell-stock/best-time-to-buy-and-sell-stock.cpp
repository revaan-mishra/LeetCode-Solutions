class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int minStock = prices[0];
        int maxProfit = 0;
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] <= minStock)
                minStock = prices[i];

            profit = prices[i] - minStock;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};