class Solution {
public:


    int dfs(vector<int>& nums, int i, vector<int>& dp)
    {

        if(dp[i]!=-1) return dp[i];
         if(i==0) return nums[0];
         if(i==1) return max(nums[0],nums[1]);

         dp[i] = max( dfs(nums,i-1,dp), nums[i] + dfs(nums,i-2,dp) );
         return dp[i];
    }


    int rob(vector<int>& nums) 
    {
        vector<int> dp1;
        vector<int> dp2;

        vector<int> nums1;
        vector<int> nums2;

        


        int n = nums.size();
        if(n==1) return nums[0];
        dp1.resize(n-1,-1);
        dp2.resize(n-1,-1);

        nums1.resize(n-1);
        nums2.resize(n-1);

        for(int i=0; i < n-1; i++)
        {
            nums1[i] = nums[i];
        }

        for(int i=1; i < n; i++)
        {
            nums2[i-1] = nums[i];
        }

        return max(dfs(nums1,n-2,dp1), dfs(nums2,n-2,dp2));
    }
};
