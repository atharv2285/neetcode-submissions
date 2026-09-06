class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        
        int maxi = 1;
        int mini = 1;

        int res = nums[0];

        for(int i=0; i < n; i++)
        {
            int temp = maxi;
            maxi = max(maxi*nums[i], max(mini*nums[i], nums[i]));
            mini = min(mini*nums[i], min(temp*nums[i], nums[i]));

            res= max(res,maxi);
        }

        return res;
        
    }
};
