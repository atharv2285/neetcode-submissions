class Solution {
public:
    int countSubstrings(string s) 
    {
        int n = s.size();
        int c = 0;

        for(int i=0; i < n; i++)
        {
            int r = i;
            int l = r;

            while(l>=0 && r<n && s[l]==s[r])
            {
                c++;
                l--;
                r++;
            }

             r = i;
             l = r-1;
             while(l>=0 && r<n && s[l]==s[r])
            {
                c++;
                l--;
                r++;
            }
        }

        return c;

        
    }
};
