class Solution {
public:
vector<int> dp;

 int rob(vector<int>& nums) 
    {  
        int n = nums.size();
        dp.resize(n+1,-1);

        return dfs(nums,n-1);
    }


    int dfs(vector<int>& nums, int i)
    {
        if(dp[i]!=-1) return dp[i];
        if(i==0) return nums[0];
        if(i==1) return max(nums[1],nums[0]);

        dp[i] = max(dfs(nums,i-1), nums[i] + dfs(nums,i-2));
        return dp[i];
    }


   
};
