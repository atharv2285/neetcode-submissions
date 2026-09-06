class Solution {
public:

vector<int> dp;

     int dfs(vector<int>& cost, int i)
     {
        if(dp[i]!=-1) return dp[i];
        if(i==1) return 0;
        if(i==0) return 0;

        dp[i] = min  (dfs(cost,i-1)+cost[i-1], dfs(cost,i-2)+cost[i-2]);
        return dp[i];
     }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        dp.resize(n+1,-1);

        return dfs(cost,n);
    }


};
