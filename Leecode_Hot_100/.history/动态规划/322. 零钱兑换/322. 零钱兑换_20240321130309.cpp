class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i = 1; i <= amount; i++)
        {
            for(int coin : coins)
            {
                if((i - coin) < 0) continue;
                dp[i] = min(dp[i - coin] + 1, dp[i]);
            }    
        }
        if (dp[amount] == INT_MAX) return -1;
        else return dp[amount];
    }
};