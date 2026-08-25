class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l =0;
        int res=0;
        unordered_set <char> list;

        for(int r=0; r < s.size(); r++)
        {
            while(l<=r && list.count(s[r]))
            {
                list.erase(s[l]);
                 l++;
            }
            
           list.insert(s[r]);
           res=max(res,r-l+1); 
        }
        return res;
    }
};
