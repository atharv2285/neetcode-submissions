class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
       int n = nums.size();
       vector<vector<int>> arr (n+1);

       unordered_map<int,int> count;

       for(int n: nums)
       {
        count[n]++;
       }

       for(auto p: count)
       {
        arr[p.second].push_back(p.first);
       }

       vector<int> res;


       for(int i=n; i>=0; i--)
       {
        
            for(int t: arr[i])
            {
                res.push_back(t);
            }
        if(res.size()==k)
        {
         return res;
        }
       }

       return res;
        
    }
};
