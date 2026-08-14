class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        vector<vector<int>> res;
        int row = heights.size();
        int col = heights[0].size();

        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

        vector<vector<bool>> atlocean;
        atlocean.resize(row,vector<bool>(col,false));


        queue <pair<int,int>> atlantic;

        for(int i=0; i < col; i++)
{
    atlantic.push({row-1,i});
    atlocean[row-1][i] = true;
}

for(int i=0; i < row; i++)
{
    atlantic.push({i,col-1});
    atlocean[i][col-1] = true;
}

        while(!atlantic.empty())
        {
            int size = atlantic.size();

            for(int i=0; i < size; i++)
            {
                pair <int,int> pr = atlantic.front();
                int m = pr.first;
                int n = pr.second;
                atlantic.pop();

                for(vector<int> v: dir)
                {
                    int p = m + v[0];
                    int q = n + v[1];

                    if(p>=0 && q>=0 && p<row && q<col && atlocean[p][q]!=true && heights[p][q]>=heights[m][n])
                    {
                        atlocean[p][q]=true;
                        atlantic.push({p,q});
                    }
                }
            }
        }








        vector<vector<bool>> pacocean;
        pacocean.resize(row,vector<bool>(col,false));


        queue <pair<int,int>> pacific;
for(int i=0; i < col; i++)
{
    pacific.push({0,i});
    pacocean[0][i] = true;
}

for(int i=0; i < row; i++)
{
    pacific.push({i,0});
    pacocean[i][0] = true;
}

        while(!pacific.empty())
        {
            int size = pacific.size();

            for(int i=0; i < size; i++)
            {

                pair <int,int> pr = pacific.front();
                int m = pr.first;
                int n = pr.second;
                pacific.pop();

                for(vector<int> v: dir)
                {
                    int p = m + v[0];
                    int q = n + v[1];

                    if(p>=0 && q>=0 && p<row && q<col && pacocean[p][q]!=true && heights[p][q]>=heights[m][n])
                    {
                        pacocean[p][q]=true;
                        pacific.push({p,q});
                    }
                }
            }
        }


        for(int i=0; i <row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(pacocean[i][j]==true && atlocean[i][j]==true)
                {
                    res.push_back({i,j});
                }
            }
        }



return res;

        
    }
};
