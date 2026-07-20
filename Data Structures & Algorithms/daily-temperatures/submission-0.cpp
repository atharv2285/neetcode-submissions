class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        vector<int> res(n);

        vector < pair<int,int> > temps(n);
         for(int i=0; i < n; i++)
        {
            temps[i] = {temperatures[i],i};
        }


        stack <pair<int,int>> st;

        for(int i=0; i < n; i++)
        {
            if(st.empty())
            {
                st.push(temps[i]);
            }
            else
            {
                while(!st.empty() && temperatures[i]>st.top().first)
                {
                    res[st.top().second] = i-st.top().second;
                    st.pop();
                }
                st.push(temps[i]);
            }
        }

        while(!st.empty())
        {
            res[st.top().second] = 0;
            st.pop();
        }

        return res;
    }
};
