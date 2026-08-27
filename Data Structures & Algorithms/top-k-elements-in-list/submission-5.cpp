class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;
        unordered_map<int,int> mp;

        for(int n: nums)
        {
            mp[n]++;
        }

        map<int,vector<int>, greater<int>> mp2;

        for(auto &it: mp)
        {
            mp2[it.second].push_back(it.first);
        }

        for(auto &it: mp2)
        {
            for(int t: it.second)
            {
                res.push_back(t);
                if(res.size()==k) return res;
            }
        }
        return res;
    }
};
