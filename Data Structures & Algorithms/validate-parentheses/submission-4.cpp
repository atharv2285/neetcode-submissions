class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        unordered_map <char,char> mp;

        mp['{'] = '}';
        mp['('] = ')';
        mp['['] = ']';

        for(char c: s)
        {
            if(c=='{' || c=='[' || c=='(')
           {
             st.push(c);
           }
           else
           {
                if(!st.empty() && mp[st.top()] == c)
              {
                st.pop();
              }
             else
            {
                return false;
            }
           }
        } 

         if(st.empty()) return true;
         return false;
    }
};
