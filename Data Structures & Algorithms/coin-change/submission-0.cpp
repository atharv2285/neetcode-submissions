class Solution {
public:
vector<int> dp;
    int coinChange(vector<int>& coins, int amount) 
    {
        int n = coins.size();

        sort(coins.begin(),coins.end());
        reverse(coins.begin(),coins.end());

        dp.resize(amount+1,amount+1);

        dp[0] = 0;

        for(int a = 1; a <=amount; a++)
        {
            for(int i =0; i < n; i++)
            {
                if(coins[i]<=a)
                {
                    dp[a] = min(dp[a], dp[a-coins[i]]+1);
                }
            }
        }

        if(dp[amount]>amount) return -1;
        return dp[amount];
        
    }
};
