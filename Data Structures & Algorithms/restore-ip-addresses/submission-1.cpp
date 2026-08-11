class Solution {
public:
    vector<string> restoreIpAddresses(string s) 
    {
        long long n = s.size();
        vector<string> ans;
        for(long long i = 0; i < (1LL << (n - 1)); i++)
        {
            if(__builtin_popcountll(i) != 3)
            continue;
            string temp;
            long long flag2 = 0;
            temp.push_back(s[0]);
            for(long long j = 1; j < n; j++)
            {
                if((1LL << (j - 1)) & i)
                {
                    temp.push_back('.');
                }
                temp.push_back(s[j]);
            }
            for(long long j = 0; j < temp.size(); j++)
            {
                if(temp[j] == '.')
                continue;
                long long num = 0, flag = 0, sz = 0;
                if(temp[j] == '0')
                flag = 1;
                while(j < temp.size() && temp[j] != '.')
                {
                    num = 10 * num + (temp[j] - '0');
                    j++;
                    sz++;
                } 
                if(num > 255)
                {
                    flag2 = 1;
                    break;
                }
                if(num > 0 && num <= 255 && flag)
                {
                    flag2 = 1;
                    break;
                }
                if(num == 0 && sz != 1)
                {
                    flag2 = 1;
                    break;
                }
            }
            if(!flag2)
            {
                ans.push_back(temp);
            }
        }

        return ans;
    }
};