class Solution {
public:
    int helper(int n,vector<int>&v,vector<int>&dp){
        if (n < 0) return 0;
        if(n==0)return v[0];
        if(dp[n]!=-1)return dp[n];
        int pick=v[n]+helper(n-2,v,dp);
        int notpick=0+helper(n-1,v,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 0) return 0;
        if(n==1)return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        vector<int>temp1;
        vector<int>temp2;
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        int ans1= helper(n-2,temp1,dp1);
        int ans2=helper(n-2,temp2,dp2);
        return max(ans1,ans2);
    }
};