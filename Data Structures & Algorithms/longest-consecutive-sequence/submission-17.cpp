class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int res=0;
        sort(nums.begin(),nums.end());
        unordered_set <int> list;

        for(int n: nums)
        {
            list.insert(n);
        }

        for(int i=0; i<nums.size(); i++)
        {
            int t = nums[i];
            if(!list.count(t-1))
            {
             t = nums[i];
            int c=0;
            while(list.count(t))
            {
                c++;
                t++;
                res = max(res,c);
            }
            }
        }

        return res;

    }
};
