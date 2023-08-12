class Solution {
public:
int path(vector<vector<int>>& obstacleGrid,int m,int n,vector<vector<int>> &dp)
    {
         if(m==0 && n==0 && obstacleGrid[m][n]!=1)
         {
             return 1;
         }
         if(m<0 || n<0 || obstacleGrid[m][n]==1)
         {
             return 0;
         }
         if(dp[m][n]!=-1)
         {
             return dp[m][n];
         }
         //move up
         int up;
         up=path(obstacleGrid,m-1,n,dp);
         //move right
         int left;
         left=path(obstacleGrid,m,n-1,dp);
         return dp[m][n]=up+left;
         
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int ans = path(obstacleGrid,m-1,n-1,dp);
        return ans;
    }
};