class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map <char,int> mp;

        for(char c : s)
        {
             mp[c]++;
        }

        for(char c: t)
        {
            if(mp[c]>1)
            {
                mp[c]--;
            }
            else if(mp[c]==1)
            {
                mp.erase(c);
            }
            else 
            {
                return false;
            }
        }

        return(mp.empty());
    }
};
