class Solution {
public:

    void islandsAndTreasure(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int,int>> que;

        for(int i=0; i < row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 0)
                {
                    que.push({i,j});
                }
            }
        }

        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};

        while(!que.empty())
        {
            int m = que.front().first;
            int n = que.front().second;
            que.pop();

            for(vector<int> v: dir)
            {
                int p = m + v[0];
                int q = n + v[1];

                if(p<0 || p>=row || q<0 || q>=col || grid[p][q] != INT_MAX)
                {
                    continue;
                }

                grid[p][q] = grid[m][n] + 1;
                que.push({p,q});
            }

        }



        

    }
};
