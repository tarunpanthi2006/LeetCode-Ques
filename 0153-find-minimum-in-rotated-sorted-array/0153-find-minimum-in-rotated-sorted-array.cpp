class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        if (nums.size() == 1) {
            return nums[0];
        }
        if (nums[lo] < nums[hi]) {
            return nums[lo];
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid<hi && nums[mid]>nums[mid+1])return nums[mid+1];
            else if (mid>lo && nums[mid]<nums[mid-1])return nums[mid];
            if(nums[mid]<nums[hi])hi=mid-1;
            else lo=mid+1;
        }
        return 0;
    }
};