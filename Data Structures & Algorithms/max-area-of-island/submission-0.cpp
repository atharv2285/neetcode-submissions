class Solution {
public:
int row;
int col;

vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

    void dfs(int m, int n, vector<vector<int>>& grid, int& count)
    {
        count++;
        grid[m][n] = 0;
        for(vector<int>& v: dir)
        {
            int p = m + v[0];
            int q = n + v[1];

            if(p>=0 && q>=0 && p<=row-1 && q<=col-1 && grid[p][q]==1)
            {
                dfs(p,q,grid,count);
            }
        }
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int res=0;
        row = grid.size();
        col = grid[0].size();
        for(int i=0; i < row; i++)
        {
            for(int j=0; j < col; j++)
            {
                if(grid[i][j]==1)
                {
                    int area = 0;
                    dfs(i,j,grid, area);
                    res=max(res,area);
                }
            }
        }
        return res;
        
    }
};
