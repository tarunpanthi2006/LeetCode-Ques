class Solution {
public:
    int recursion(vector<int>&nums,int i,vector<int>&dp){
        int n=nums.size();
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        dp[i]=max(0+recursion(nums,i+1,dp),nums[i]+recursion(nums,i+2,dp));
        return dp[i];
        // basically i have 2 choices leave or steal so dono cases ko tackle kiya
        // if i am stealing i will add that value to ans and then i=i+2 coz adjacent wale ko ignore karunga
        // if i am leaving then i will go to i+1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return recursion(nums,0,dp);
    }
};