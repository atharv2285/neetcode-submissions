class Solution {
public:
vector <int> dp;
    int rob(vector<int>& nums) 
    {
         int n = nums.size();
         dp.resize(n,-1);
        return dfs(0,nums);  
    }

     int dfs(int i, vector<int>& nums)
     {
        int n = nums.size();
        if(i>n-1)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        
        dp[i] = max(dfs(i+1,nums), dfs(i+2,nums)+ nums[i]);

        return dp[i];
     }
    
};
