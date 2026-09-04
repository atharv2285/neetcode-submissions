class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n = s.size();
        string res;

        int maxi = 0;

        for(int i=0; i<n; i++)
        {
            int r = i;
            int l = r;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1>maxi)
                {
                    res = s.substr(l,r-l+1);
                    maxi = max(maxi,r-l+1);
                }
                l--;
                r++;
            }


            r = i;
           l = r-1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1>maxi)
                {
                    res = s.substr(l,r-l+1);
                    maxi = max(maxi,r-l+1);
                }
                l--;
                r++;
            }
        }


        return res;
        
    }
};
