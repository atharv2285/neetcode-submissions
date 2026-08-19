class Solution {
public:

vector<int> dp;
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        dp.resize(n,-1);

        if(n==1) return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        return dfs(nums, n-1);
    }

    int dfs(vector<int>& nums, int i)
    {
        if(dp[i]!=-1) return dp[i];

        dp[i] = max(dfs(nums,i-1), dfs(nums,i-2) + nums[i]);

        return dp[i];
    }
};
