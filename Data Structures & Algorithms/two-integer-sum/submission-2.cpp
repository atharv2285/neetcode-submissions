class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> res;
        int n = nums.size();

        for(int i=0; i < n; i++)
        {
            int diff = target-nums[i];

            for(int j=i+1; j<n; j++)
            {
                if(diff==nums[j])
                {
                    return {i,j};
                }
            }   
        }
        
    }
};
