class Solution {
public:

vector<int> dp;


  int dfs(int i)
  {
    if(i<=2) return i;
    if(dp[i]!=-1) return dp[i];
    dp[i] = dfs(i-1) + dfs(i-2);

    return dp[i];
  }



   int climbStairs(int n) 
    { 
        dp.resize(n+1,-1);
        return dfs(n);
    }
};
