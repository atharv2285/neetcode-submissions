class Solution {
public:

vector<int> dp;

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        if(n==1) return 0;

        dp.resize(n+1,-1);

        dp[0] = 0;
        dp[1] = 0;

        return dfs(cost,n);
    }

    int dfs(vector<int>& cost, int t)
    {
        if(dp[t]!=-1) return dp[t];

        dp[t] = min( dfs(cost,t-1) +cost[t-1], dfs(cost,t-2) + cost[t-2]);

        return dp[t];        
    }
};
