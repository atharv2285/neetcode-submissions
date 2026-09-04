class Solution {
public:
vector<int> dp;

    int climbStairs(int n) 
    {
      dp.resize(n+1,-1); 
      return dfs(n);
        
    }

    int dfs(int i)
    {
      if(dp[i]!=-1) return dp[i];
      if(i==1) return 1;
      if(i==2) return 2;

      dp[i] = dfs(i-1) + dfs(i-2);
      return dp[i];

    }
};
