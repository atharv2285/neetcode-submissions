class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> dp;
        int n = nums.size();
        dp.resize(n,1);
        int res = 0;


        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i] = max(dp[j]+1, dp[i]);
                }
            }

              res = max(res,dp[i]);
        }
             return res;
        
    }
};
