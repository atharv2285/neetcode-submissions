class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());
        unordered_map <int,int> mp;

        for(int i=0; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }

        for(int i=0; i < nums.size(); i++)
        {
            if(i-1<nums.size() && nums[i-1]==nums[i])
            {
                continue;
            }

            int target = -nums[i];

            for(int j =i+1; j < nums.size(); j++)
            {
                if(mp.count(target-nums[j]) && mp[target-nums[j]]>j)
                {
                    res.push_back({nums[i],nums[j],target-nums[j]});
                }

                 while(j+1<nums.size() && nums[j+1]==nums[j] )
                {
                    j++;
                }
            }
        }
        
        return res;
    }
};
