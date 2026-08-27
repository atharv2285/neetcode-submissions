class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;
        int maxi = 0;
        unordered_map <int,int> mp;
        for(int n: nums)
        {
            mp[n]++;
            maxi = max(maxi,mp[n]);
        }

        vector<vector<int>> bucket(maxi+1);

        for(auto &it: mp)
        {
            bucket[it.second].push_back(it.first);
        }

          for(int i=bucket.size()-1; i>=0; i--)
        {
            for(int n: bucket[i])
            {
                res.push_back(n);
                if(res.size()==k) return res;
            }
        }
      
        return res;
    }
};
