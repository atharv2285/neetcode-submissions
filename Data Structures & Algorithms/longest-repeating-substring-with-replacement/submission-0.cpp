class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map<char,int>mp;
        int l = 0;
        int r = 0;
        int res = 0;

        for(int r=0; r<s.size(); r++)
        {
            mp[s[r]]++;
            int maxi = 0;
            for(auto& it:mp)
            {
                maxi=max(maxi,it.second);
            }

            while(l<=r && r-l+1-maxi>k)
            {
                mp[s[l]]--;
                l++;
            }

            res = max(res,r-l+1);
        }        
        return res;
    }
};
