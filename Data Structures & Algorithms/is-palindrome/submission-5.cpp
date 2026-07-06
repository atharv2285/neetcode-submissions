class Solution {
public:
    bool isPalindrome(string s) 
    {

        int n = s.size();
        if(n==0) return true;

        int l =0;
        int r =n-1;

        while(r>=l)
        {
              cout << s[l] << " " << s[r] << endl;

            if(s[r]==' ' || !isalnum(s[r]))
            {
                r--;
                continue;
            }
            if(s[l]==' ' || !isalnum(s[l]))
            {
                l++;
                continue;
            }

            if(tolower(s[l])!=tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        } 
        return true;
    }
};
