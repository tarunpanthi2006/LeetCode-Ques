class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==2)return min(nums[0],nums[1]);
        int lo=0;
        int hi=n-1;
        int ans=1e9;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[lo]<=nums[mid]){
                ans=min(ans,nums[lo]);
                lo=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                hi=mid-1;
            }
        }
        return ans;
    }
};