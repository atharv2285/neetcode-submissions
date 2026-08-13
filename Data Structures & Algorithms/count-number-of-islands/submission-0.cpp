class Solution {
public:


        vector<vector<int>> dir = {{0,1}, {1,0}, {-1,0}, {0,-1}};
        int row;
        int col;
        int count=0;


        void dfs(int m, int n, vector<vector<char>>& grid)
        {
            grid[m][n]='0';

            for(vector<int> v: dir)
            {
                int mnew = m  + v[0];
                int nnew = n  + v[1];

                if(mnew>=0 && mnew<=row-1 && nnew>=0 && nnew<=col-1 && grid[mnew][nnew] == '1')
                {
                    dfs(mnew,nnew,grid);
                }
            }  
        }


    int numIslands(vector<vector<char>>& grid) 
    {
        row = grid.size();
        col = grid[0].size();

        for(int i=0; i < row; i++)
        {
            for(int j =0; j<col; j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    count++;
                }
            }
        }

        return count;

    }
};
