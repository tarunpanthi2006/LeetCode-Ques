class Solution {
  public:
    bool f(int i,vector<int>& arr, int target,vector<vector<int>>&dp){
        if(target==0)return true;
        if(i==0)return(arr[0]==target);
        if(dp[i][target]!=-1)return dp[i][target];
        bool nottake=f(i-1,arr,target,dp);
        bool take=false;
        if(target>=arr[i])take=f(i-1,arr,target-arr[i],dp);
        return dp[i][target]=(nottake|| take);
    }
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int target=sum/2;
        if(sum%2!=0)return false;
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return f(n-1,arr,target,dp);
    }
};