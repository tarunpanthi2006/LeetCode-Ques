class Solution {
public:
    // dp vector ki jagha map banaya coz n ki constarins bahut badi hai
    int helper(long long n , unordered_map<long long, long long>& dp){
        if(n==1)return 0;
        if(n==2)return 1;
        if(dp.find(n)!=dp.end())return dp[n];
        if(n%2==0) {
            dp[n]=1+helper(n/2,dp);
        }
        else dp[n]=1+min(helper(n-1,dp),helper(n+1,dp));
        return dp[n];
    }
    int integerReplacement(int n) {
        unordered_map<long long, long long> dp;
        return helper(n,dp);
    }
};