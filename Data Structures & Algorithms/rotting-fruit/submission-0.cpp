class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();

        int count = 0;
        int t=0;

        queue <pair<int,int>> que;


        for(int i=0; i < row; i++)
        {
            for(int j=0; j < col; j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }
                 if(grid[i][j] == 2)
                {
                    que.push({i,j});
                }
            }
        }

        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

        while(count>0 && !que.empty())
        {
            int size = que.size();
            
            for(int i=0; i < size; i++)
            {
            pair<int,int> pr = que.front();
            que.pop();
            int m = pr.first;
            int n = pr.second;

            for(vector<int> v: dir)
            {
               int   p = m + v[0];
               int   q = n + v[1];

            if(p>=0 && q>=0 && p<row && q<col && grid[p][q]==1)
            {
                grid[p][q]=2;
                que.push({p,q});
                count--;
            }
            }

            }

            t++;

        }


        if(count!=0) return -1;
        return t;
        
    }
};
