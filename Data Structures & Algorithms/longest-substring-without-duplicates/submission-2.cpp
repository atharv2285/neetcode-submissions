class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l=0;
        int r=0;
        if(s.size()==0) return 0;
        unordered_set <char> list;
        list.insert(s[l]);
        int res = 1;

        while(r+1<s.size())
        {
          while(l<=r && list.count(s[r+1]))
                {
                    list.erase(s[l]);
                    l++;
                }
            
               r++;
            list.insert(s[r]);
                res=max(res,r-l+1);

        }
        
        return res;
    }
};
