class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        unordered_map <string, vector<string>> mp;
        
        for(string s: strs)
        {
            string sorted = s;
            sort(sorted.begin(), sorted.end());

            mp[sorted].push_back(s);
        }
        for(auto p: mp)
        {
            res.push_back(p.second);
        }
        return res;
    }
};
