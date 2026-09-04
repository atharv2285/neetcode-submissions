class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum = 0;
        int n = nums.size();
        for(int num: nums)
        {
            sum = sum + num;
        }

        if(sum%2!=0) return false;
        int target = sum/2;

        vector<bool> dp(target+1,false);
        dp[0]=true;

        for(int t: nums)
        {
            for(int j=target; j >=t; j--)
            {
                dp[j] = dp[j] || dp[j-t]; 
            }
        }

        return dp[target];
        
    }
};
