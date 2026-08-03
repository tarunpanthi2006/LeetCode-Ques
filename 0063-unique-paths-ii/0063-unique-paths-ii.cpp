class Solution {
public:
    int f(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
        int m=grid.size();
        int n=grid[0].size();
        if(i>m-1 || j>n-1 || grid[i][j]==1)return 0;
        if(i==m-1 && j==n-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        int left=f(grid,i+1,j,dp);
        int right=f(grid,i,j+1,dp);
        return dp[i][j]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
       vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return f(grid,0,0,dp);
    }
};