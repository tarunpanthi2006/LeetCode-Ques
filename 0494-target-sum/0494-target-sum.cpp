class Solution {
public:
    int f(int i,int target,vector<int>& nums){
        if(i==0){
            if (target ==0 && nums[0] ==0) return 2;
            if (target == nums[0] || target == -nums[0]) return 1; // agar last ele is 5 andtarget bhi 5 hai toh ans=1 and if last ele is -5 and target is 5 toh bhi ans is 1;
            return 0;
        }
        int plus=f(i-1,target-nums[i],nums);
        int minus=f(i-1,target+nums[i],nums);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return f(n-1,target,nums);
    }
};