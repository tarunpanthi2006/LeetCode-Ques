class Solution {
public:
// by tabulation
    int change(int target, vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1));
        for(int i=0;i<n;i++){
            dp[i][0]=1;
        }
        for(int t=1;t<=target;t++){
            if(t%nums[0]==0) dp[0][t]=1;
            else dp[0][t]=0;
        }
        for(int i=1;i<n;i++){
            for(int t=1;t<=target;t++){
            long long int take=0;
            if(nums[i]<=t)take=dp[i][t-nums[i]];
            long long int nottake=dp[i-1][t];
            dp[i][t]=take+nottake;
            }
        }
        return dp[n-1][target];
    }
};