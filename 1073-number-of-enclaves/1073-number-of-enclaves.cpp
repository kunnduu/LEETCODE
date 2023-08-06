class Solution {
public:
 void dfs(int row,int col,vector<vector<int>> &visited , vector<vector<int>>& board,vector<int> &delrow,vector<int> &delcol)
    {      visited[row][col]=1;
           int n = board.size();
           int m=board[0].size();
           for(int i=0;i<4;i++)
           {
               int nrow=row+delrow[i];
               int ncol=col+delcol[i];
               if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && board[nrow][ncol]==1)
               {
                   dfs(nrow,ncol,visited,board,delrow,delcol);
               }
           } 

    }
    int numEnclaves(vector<vector<int>>& board) {
        int n = board.size();
        int m=board[0].size();
        vector<int> delrow={0,1,-1,0};
        vector<int> delcol={1,0,0,-1};
        vector<vector<int>> visited(n,vector<int>(m,0));
        // traverse first and last row
        for(int j=0;j<m;j++)
        {
            if(!visited[0][j] && board[0][j]==1)
            {
                dfs(0,j,visited,board,delrow,delcol);
            }
            if(!visited[n-1][j] && board[n-1][j]==1)
            {
                dfs(n-1,j,visited,board,delrow,delcol);
            }
        }
        //traverse first and last col
        for(int i=0;i<n;i++)
        {
            if(!visited[i][0] && board[i][0]==1)
            {
                 dfs(i,0,visited,board,delrow,delcol);
            }
            if(!visited[i][m-1] && board[i][m-1]==1)
            {   
                dfs(i,m-1,visited,board,delrow,delcol);
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   
                if(!visited[i][j] && board[i][j]==1)
                {
                    count++;
                }
                
            }
            
        }
        return count;
    }
    
};