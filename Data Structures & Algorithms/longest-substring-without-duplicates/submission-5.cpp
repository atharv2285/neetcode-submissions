class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set <char> list;
        int length = 0;

        int l = 0;

        for(int r=0; r<s.size(); r++)
        {
            while(list.count(s[r]))
            {
                list.erase(s[l]);
                l++;
            }


            list.insert(s[r]);
            length = max(length, r-l+1);   
        }

        return length;
        
    }
};
