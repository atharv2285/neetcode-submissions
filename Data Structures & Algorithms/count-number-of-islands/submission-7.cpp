class Solution {
public:

vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
int row;
int col;


    void dfs(vector<vector<char>>& grid, int m, int n)
    {
        for(vector<int>& v: dir)
        {
           int p = m +  v[0];
           int q = n +  v[1];

           if(p>=0 && q>=0 && p<row && q<col && grid[p][q]=='1')
           {
            grid[p][q]='0';
            dfs(grid,p,q);
           }
        }

    }

    int numIslands(vector<vector<char>>& grid) 
    {
        int c = 0;
        row = grid.size();
        col = grid[0].size();

        for(int i=0; i < row; i++)
        {
            for(int j=0; j < col; j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    dfs(grid,i,j);
                }
            }
        }
        return c;
    }
};
