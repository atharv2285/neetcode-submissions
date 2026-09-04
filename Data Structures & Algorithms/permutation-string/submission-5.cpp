class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.size();
        unordered_map <char,int> mp;
        int res=0;
        int maxi = 0;

        int l = 0;

        for(int r=0; r < n; r++)  
        {
            mp[s[r]]++;
            maxi=max(maxi,mp[s[r]]);

            
            while(l<r && (r-l+1)-maxi>k)
            {
                mp[s[l]]--;
                l++;
            }

            res = max(res,r-l+1);
        }

        return res;
    } 
};
