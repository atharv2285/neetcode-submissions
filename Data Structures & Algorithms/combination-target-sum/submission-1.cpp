class Solution {
public:

vector<vector<int>> res;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        backtrack(nums,target,temp,0);

        return res;
    }

    void backtrack(vector<int> nums, int target, vector<int>& temp, int i)
    {
        if(target==0)
        {
            res.push_back(temp);
            return;
        }
        if(target < 0 || i>=nums.size())
        {
            return;
        }

        temp.push_back(nums[i]);
        backtrack(nums,target-nums[i],temp,i);
        temp.pop_back();
        backtrack(nums,target,temp,i+1);

    }
};
