class Solution {
public:

int size;
vector<int> dp;

    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        size = n;
        dp.resize(n,-1);


        return dfs(nums,0);
    }

    int dfs(vector<int>& nums, int i)
    {
        if(i>=size)
        {
             return 0;
        }

        if(dp[i]!=-1)
        {
            return dp[i];
        }

       dp[i] = max(dfs(nums,i+1), nums[i]+dfs(nums,i+2));

       return dp[i];
    }
};
