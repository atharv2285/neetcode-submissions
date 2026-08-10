class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
           int n = nums.size();

          int  mini=1;
          int maxi = 1;
          int res = nums[0];


         

         for(int i=0; i < n; i++)
         {
            int temp = nums[i]*maxi;
            maxi = max(max( nums[i]*maxi,  nums[i]*mini), nums[i] ); 
            mini = min( min(temp,  nums[i]*mini  ), nums[i] ); 

            res = max(res,maxi);
         }

         return res;

         
         
    }
};
