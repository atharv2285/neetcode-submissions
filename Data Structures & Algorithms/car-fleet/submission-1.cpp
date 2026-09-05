class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        stack <pair<int,int>> st;
        int n = position.size();
        vector<int> speed2(n);
        unordered_map <int,int> mp;
        for(int i=0; i <n; i++)
        {
            mp[position[i]]=i;
        }

        sort(position.begin(),position.end());

        for(int i=0; i<n; i++)
        {
            int t = mp[position[i]];
            speed2[i] = speed[t];
        }

        for(int i=0; i < n; i++)
        {
            if(st.empty())
            {
                st.push({position[i],speed2[i]});
            }
            else
            {
                double t1 = (double)(target-position[i])/speed2[i];
                double t2 = (double)(target-st.top().first)/st.top().second; 
                while(!st.empty() && t1>=t2)
                {
                    st.pop();
                    if(!st.empty())t2 = (double)(target-st.top().first)/st.top().second; 
                }

                st.push({position[i],speed2[i]});
            }
          
        }

        return st.size();
        
    }
};
