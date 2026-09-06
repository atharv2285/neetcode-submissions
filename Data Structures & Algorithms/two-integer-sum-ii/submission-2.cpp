class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> res(2);

        unordered_map <int,int> mp;

        for(int i=0; i < n; i++)
        {
            mp[nums[i]] = i;
        }

        for(int i=0; i < n; i++)
        {
            if(mp.count(target-nums[i]) && mp[target-nums[i]]!=i)
            {
                res[0] = i+1;
                res[1] = mp[target-nums[i]]+1;
            }
        }

        sort(res.begin(),res.end());

        return res;

        
    }
};
