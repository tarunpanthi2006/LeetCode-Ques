class Solution {
public:
    int minimum(vector<int>& nums,int x){
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<x){x=nums[i];
            ans=i;}
        }
        return ans;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int idx=minimum(nums,nums[0]);
            nums[idx]=nums[idx]*multiplier;
        }
        return nums;
    }
};