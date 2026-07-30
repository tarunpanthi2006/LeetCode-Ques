class Solution {
public:
    int helper2(int n,vector<int>& nums,vector<int>&dp2){
        if (n < 1) return 0;
        if(n==1)return nums[1];
        if(dp2[n]!=-1)return dp2[n];
        int pick=nums[n]+helper2(n-2,nums,dp2);
        int notpick=0+helper2(n-1,nums,dp2);
        return dp2[n]=max(pick,notpick);
    }
    int helper(int n,vector<int>& nums,vector<int>&dp){
        if (n < 0) return 0;
        if(n==0)return nums[0];
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+helper(n-2,nums,dp);
        int notpick=0+helper(n-1,nums,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 0) return 0;
        if(n==1)return nums[0];
        vector<int>dp(n+1,-1);
        vector<int>dp2(n+1,-1);
        int ans1= helper(n-2,nums,dp);
        int ans2=helper2(n-1,nums,dp2);
        return max(ans1,ans2);
    }
};