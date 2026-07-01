class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> res(n,1);

        vector<int> prefix(n,1);
        vector<int> suffix(n,1);


        for(int i=0; i<n-1; i++)
        {
            prefix[i+1] = prefix[i]*nums[i];
            suffix[n-2-i] = suffix[n-1-i]*nums[n-1-i];
        }
        

        for(int i=0; i<n; i++)
        {
            res[i] = suffix[i] * prefix[i];
        }
       
       return res;

    }
};
