class Solution {
public:
    int helper(int n ,int k, int t,vector<vector<int>>&dp){
        if(n==0 && t==0)return 1;
        if(n==0 || t<0)return 0;
        if(dp[n][t]!=-1)return dp[n][t];
        long long ways=0;
        for(int i=1;i<=k;i++){
            ways=(ways+helper(n-1,k,t-i,dp))%1000000007;
        }
        dp[n][t]=ways;
        return dp[n][t];
    }
    int numRollsToTarget(int n, int k, int t) {
        vector<vector<int>>dp(n+1,vector<int>(t+1,-1));
        return helper(n,k,t,dp);
    }
};