class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& dp) {
        int m = dp.size();
        int n = dp[0].size();
        if(m==1 && n==1){
            if(dp[0][0]==1)return 0;
            else return 1;
        }
        if(dp[m-1][n-1]==1)return 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dp[i][j] == 1) {
                    dp[i][j] = -1;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(dp[0][j]==-1)break;
            dp[0][j]=1;
        }
        for(int i=0;i<m;i++){
            if(dp[i][0]==-1)break;
            dp[i][0]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(dp[i-1][j]==-1 && dp[i][j-1]==-1){
                    dp[i][j]=-1;
                    continue;
                }
                if(dp[i][j]==-1){
                    dp[i][j]=0;
                    continue;
                }
                if(dp[i-1][j]==-1){
                    dp[i][j]=dp[i][j-1];
                    continue;
                }
                if(dp[i][j-1]==-1){
                    dp[i][j]=dp[i-1][j];
                    continue;
                }
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        if(dp[m-1][n-1]==-1)return 0;
        return dp[m-1][n-1];
    }
};