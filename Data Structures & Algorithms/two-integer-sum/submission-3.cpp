class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();

        for(int i=0; i < n; i++)
        {
            int num1 = nums[i];
            int goal = target-nums[i];

            for(int j=i+1; j<n; j++)
            {
                if(nums[j]==goal)
                {
                    return {i,j};
                }
            }

        }
        
    }
};
