class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map <string, vector<string>> mp ;

        for(string s: strs)
        {
             string st = s;
          sort(st.begin(),st.end());
           mp[st].push_back(s);
        }

         vector<vector<string>> res;

         for(auto& p: mp)
         {
            res.push_back(p.second);
         }
        
        return res;
    }
};
