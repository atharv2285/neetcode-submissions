class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        int maxi=1;
        sort(nums.begin(),nums.end());

        if(n==0) return 0;
        int c =1;
        for(int i=1; i<n; i++)
        {
            if(nums[i]-1==nums[i-1])
            {
                c++;
                maxi=max(maxi,c);
            }
            else if(nums[i]==nums[i-1])
            {
                
            }
            else
            {
                c=1;
            }

        }
        return maxi;
        
    }
};
