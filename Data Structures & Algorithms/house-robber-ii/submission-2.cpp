class Solution {
public:


    int rob(vector<int>& nums) 
    {
        vector<int> dp1;
        vector<int> dp2;

        vector<int> nums1;
        vector<int> nums2;
        int n = nums.size();
        
        if(n==1)
        {
            return nums[0];
        }
        
        dp1.resize(n-1,-1);
        dp2.resize(n-1,-1);

        nums1.resize(n-1);
        nums2.resize(n-1);

        for(int i=0; i<n-1; i++)
        {
            nums1[i] = nums[i];
        }
        for(int i=1; i<n; i++)
        {
            nums2[i-1]= nums[i];
        }
        return max(dfs(nums1,0,dp1),dfs(nums2,0,dp2));
    }


    int dfs(vector<int>& nums, int i, vector<int>& dp)
    {
        int n = nums.size();

        if(i>=n) 
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }

        dp[i] =  max(dfs(nums,i+1,dp),nums[i] + dfs(nums,i+2,dp));
        return dp[i];
    }
};
