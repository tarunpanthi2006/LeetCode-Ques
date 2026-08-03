class Solution {
public:
    int f(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
        int n=grid.size();
        if(i==n-1)return grid[i][j];
        if(dp[i][j]!=-100)return dp[i][j];
        int left=f(grid,i+1,j,dp);
        int right=f(grid,i+1,j+1,dp);
        return dp[i][j]=grid[i][j]+min(left,right);
    }
    int minimumTotal(vector<vector<int>>& grid) {
        vector<vector<int>>dp(201,vector<int>(201,-100));
        return f(grid,0,0,dp);
    }
};