class Solution {
public:
    int f(int i,int target,vector<int>& nums,vector<unordered_map<int,int>>&dp){
        if(i==0){
            if (target ==0 && nums[0] ==0) return 2;
            if (target == nums[0] || target == -nums[0]) return 1; // agar last ele is 5 andtarget bhi 5 hai toh ans=1 and if last ele is -5 and target is 5 toh bhi ans is 1;
            return 0;
        }
        if(dp[i].find(target)!=dp[i].end()){
            return dp[i][target];
        }
        int plus=f(i-1,target-nums[i],nums,dp);
        int minus=f(i-1,target+nums[i],nums,dp);
        return dp[i][target]= plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<unordered_map<int, int>> dp(n);
        return f(n-1,target,nums,dp);
        // maine map banadiya coz negative values cannnot be index like i cannot have dp[4][-1] it is impossible. so second index k liye map banaya
    }
};