class Solution {
public:
    int f(int i, int target,vector<int>& nums,vector<vector<int>>&dp){
        if(target==0)return 1;
        if(i==0){
            if(target%nums[i]==0)return 1;
            return 0;
        }
        if(dp[i][target]!=-1)return dp[i][target];
        int take=0;
        if(nums[i]<=target)take=f(i,target-nums[i],nums,dp);
        int nottake=f(i-1,target,nums,dp);
        return dp[i][target]=take+nottake;
    }
    int change(int target, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return f(n-1,target,coins,dp);
    }
};