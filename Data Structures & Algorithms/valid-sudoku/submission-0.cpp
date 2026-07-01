class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int row = board.size();
        int col = board[0].size();

        

        for(int i=0; i<row; i++)
        {
            unordered_set <char> list;
           for(int j=0; j<col; j++)
           {
            if(board[i][j]=='.') continue;
            if(list.count(board[i][j])) return false;
            list.insert(board[i][j]);
           }
        }

         for(int i=0; i<col; i++)
        {
              unordered_set <char> list;
           for(int j=0; j<row; j++)
           {
            if(board[j][i]=='.') continue;
            if(list.count(board[j][i])) return false;
            list.insert(board[j][i]);
           }
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                 unordered_set <char> list;
                for(int m=0; m<3; m++)
                {
                    for(int n=0; n<3; n++)
                    {
                        if(board[i*3+m][j*3+n]=='.') continue;
                        if(list.count(board[i*3+m][j*3+n])) return false;
                         list.insert(board[i*3+m][j*3+n]);
                    }
                }
            }
        }

        return true;
        
    }
};
