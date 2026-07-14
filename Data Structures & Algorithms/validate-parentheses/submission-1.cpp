class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        unordered_map<char,char> mp;

          mp['('] = ')';
          mp['{'] = '}';
          mp['['] = ']';


          for(char c: s)
          {
            if(st.empty() && mp.count(c))
            {
                st.push(c);
            }
            else if(st.empty() && !mp.count(c))
            {
                return false;
            }
            else
            {
                if(mp[st.top()] == c )
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
          }

          return st.empty();

        
    }
};
