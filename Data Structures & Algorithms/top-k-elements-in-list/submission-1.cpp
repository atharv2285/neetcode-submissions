class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n = nums.size();

        vector<int> res; 
        vector<int> list;
        unordered_map<int,int> mp;
        unordered_map<int,vector<int>> mpp;

        for(int n: nums)
        {
            mp[n]++;
        }

        for(auto& p: mp)
        {
            mpp[p.second].push_back(p.first); 
        }

      for(auto& p: mpp)
        {
           cout << p.first << " "  << endl;
        }

        for(int i =n; i>=0; i--)
        {
            for(int t: mpp[i])
            {
                res.push_back(t);
                if(res.size()==k) return res;
            }
        }

        return res;

        
    }
};
