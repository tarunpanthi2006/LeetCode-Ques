class Solution {
public:
    int last(vector<int>&nums,int target){
        int lo=0;
        int hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                ans=mid;
                lo=mid+1;
            }
            else if(target>nums[mid]){
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
    int first(vector<int>&nums,int target){
        int lo=0;
        int hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                ans=mid;;
                hi=mid-1;
            }
            else if(target>nums[mid]){
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{first(nums,target),last(nums,target)};
    }
};