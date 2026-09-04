class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        int res=nums[0];
    
        int maxi=1;
        int mini=1;

        vector<int> dp;

        for(int i=0; i < n; i++)
        {
            int temp = maxi*nums[i];
            maxi = max(nums[i]*maxi, max(nums[i],nums[i]*mini));
            mini = min(nums[i]*mini, min(nums[i],temp));

            res = max(res,maxi);
        }

        return res;;
        
    }
};
