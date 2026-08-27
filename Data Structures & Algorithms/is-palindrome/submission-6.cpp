class Solution {
public:
    bool isPalindrome(string s) 
    {

        string copy;

        for(char c: s)
        {
            if(c==' ' || !isalnum(c))
            {
                continue;
            }
            else
            {
              char cnew = tolower(c);
              copy = copy + cnew;
            }
        }

        cout << copy;


        int l = 0;
        int r = copy.size()-1;

        while(l<r)
        {
            if(copy[l]!=copy[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
