class Solution {
public:
    int uniquePaths(int m, int n) {
        // by tabulation method simple iterative
        vector<vector<int>>dp(m,vector<int>(n));
        for(int j=0;j<n;j++){
            dp[0][j]=1;
        }
        for(int i=0;i<m;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1]; // bss yahi ek formula pata karna tha thats it. aur yeh easily diagram banakar aa gaya
            }
        }
        return dp[m-1][n-1];
    }
};