class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int l = 0;
        int r = row*col - 1;

        while(l<=r)
        {
            int m = l + (r-l)/2;
            int mr = m/col;
            int mc = m%col;

            if(matrix[mr][mc]==target)
            {
                return true;
            }

            else if(matrix[mr][mc]>target)
            {
                r = m-1;
            }
            else
            {
                l = m+1;
            }

        }

        return false;
    }
};
