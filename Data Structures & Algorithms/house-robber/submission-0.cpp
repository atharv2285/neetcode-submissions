class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> res(n+1);

         if(n==0) return 0;
         if(n==1) return nums[0];

        res[1] = nums[0];
        res[2] = max(nums[0],nums[1]);

        for(int i=3; i <=n; i++)
        {
            res[i] = max(res[i-1], res[i-2]+nums[i-1]);
        } 

        return res[n];
    }
};
