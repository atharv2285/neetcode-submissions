class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack <int> st;


        for(string s: tokens)
        {
            if(s!="+" && s!="/" && s!="-" && s!="*")
            {
                st.push(stoi(s));
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                  int res;
                if(s=="+")
                {
                    res = a+b;
                } 
                else if(s=="-")
                {
                    res = b-a;
                } 
                else if(s=="*")
                {

                    res = a*b;
                } 
                else
                {
                    res = b/a;
                } 

                st.push(res);

            }
        }
        return st.top();
    }
};
