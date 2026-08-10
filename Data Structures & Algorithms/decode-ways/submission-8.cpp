class Solution 
{
public:

vector<int> dp;


    int dfs(string& s, int i)
    {
        if(s[i]=='0') return 0;
       if(i>=s.size()-1) return 1;


     if(dp[i]!=-1) return dp[i];
 
        
        int c = dfs(s,i+1);

        if(s[i]=='1' || (s[i]=='2' && s[i+1] < '7'))
        {
            c = c + dfs(s,i+2);
        }

        dp[i] = c;

        return c;
    }


    int numDecodings(string s) 
    {
        int n = s.size();
        dp.resize(n,-1);
       return dfs(s,0);
    }
};
