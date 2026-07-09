class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)one++;
            maxi=max(maxi,one);
            if(nums[i]==0)one=0;
        }
        return maxi;
    }
};