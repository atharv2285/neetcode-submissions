class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> list;
        int n = s.size();
        int res = 0;

        int l =0;

        for(int r=0; r<n; r++)
        {
            while(l<r && list.count(s[r]))
            {
                list.erase(s[l]);
                l++;
            }

           list.insert(s[r]);
           res = max(res,r-l+1);
        }

        return res;
        
    }
};
