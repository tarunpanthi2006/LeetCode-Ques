class Solution {
public:
    int f(int i,vector<int>& coins, int target,vector<vector<int>>&dp){
        if(i==0){
            if(target%coins[0]==0)return target/coins[0];
            else return 1e9;
        }
        if(dp[i][target]!=-1)return dp[i][target];
        // ya coin lunga ya nahi lunga

        int nahilunga=0+f(i-1,coins,target,dp);
        int lunga=INT_MAX;
        if(coins[i]<=target)lunga = 1+f(i,coins,target-coins[i],dp);
        return dp[i][target]=min(lunga,nahilunga);
    }
    int coinChange(vector<int>& coins, int target) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        int ans=f(n-1,coins,target,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};