class Solution {
public:
    int helper(vector<int>cost,int i , vector<int>&dp){
        int n=cost.size();
        if(i>=n)return 0; // matlab mai last mein pahuch gaya and ab koi step nahi hai so ab koi new cost nahi aayega so return 0 kara
        if(dp[i]!=-1)return dp[i];
        dp[i]=cost[i]+min(helper(cost,i+1,dp),helper(cost,i+2,dp));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(helper(cost,0,dp),helper(cost,1,dp));
    }
};