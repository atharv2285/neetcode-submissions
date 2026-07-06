class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        
        int l =0;
        int r =heights.size()-1;
        int vol =0;
        int maxi =0;

        while(l<=r)
        {
            vol = min(heights[l],heights[r]) * (r-l);
            maxi = max(maxi,vol);

            if(heights[l]<heights[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxi;
        
    }
};
