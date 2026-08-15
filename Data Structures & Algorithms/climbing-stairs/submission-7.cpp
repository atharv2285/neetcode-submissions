class Solution {
public:

vector<int> dp;

    int climbStairs(int n) 
    {
        dp.resize(n+1,-1);

        if(n==1) return 1;

        dp[1]=1;
        dp[2]=2;

        return dfs(n);
    }

    int dfs(int i)
    {
        if(dp[i]!=-1) return dp[i];
        dp[i] = dfs(i-1) + dfs(i-2);

        return dp[i];
    }
};
