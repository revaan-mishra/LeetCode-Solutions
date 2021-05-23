class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
    vector<int>numOfCoins(amount+1,0);
    numOfCoins[0] = 1;

    for (int denom = 0; denom < coins.size(); denom++)
    {
        for (int amount = 1; amount < numOfCoins.size(); amount++)
        {
            if (amount - coins[denom] >= 0)
                numOfCoins[amount] += numOfCoins[amount - coins[denom]];
        }
    }
    return numOfCoins[amount];
    }
};