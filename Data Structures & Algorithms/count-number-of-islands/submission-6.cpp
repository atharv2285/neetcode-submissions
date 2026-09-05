class Solution {
public:

int row;
int col;

vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

    void dfs(vector<vector<char>>& grid, int m, int n)
    {
        grid[m][n] = '0';

        for(vector<int> v: dir)
        {
            int p = m + v[0];
            int q = n + v[1];

            if(p>=0 && p<row && q>=0 && q<col && grid[p][q]=='1')
            {
                dfs(grid,p,q);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        row = grid.size();
        col = grid[0].size();
        
        int c = 0;

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
