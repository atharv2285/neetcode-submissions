class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       int l = 0;
       int r = 1;
       int n = prices.size();

       int res = 0;

       while(l<r && r<n)
       {
        res = max(res,prices[r]-prices[l]);

        if(prices[r]>=prices[l])
        {
            r++;
        }
        else
        {
            l=r;
            r++;
        }

       }

       return res;
        
    }
};
