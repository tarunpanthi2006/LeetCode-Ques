class Solution {
public:
    bool check(int mid,vector<int>& nums, int days){
        int n=nums.size();
        int sum=0;
        int grp=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]>mid){
                grp++;
                sum=nums[i];
            }
            else {
                sum+=nums[i];
            }
        }
        if(grp<=days)return true;
        return false;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int sum=0;
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(nums[i]>maxi)maxi=nums[i];
        }
        if(days==1)return sum;
        if(days==n)return maxi;
        int lo=maxi;
        int hi=sum;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,nums,days)){
                hi=mid-1;
            }
            else {
                lo=mid+1;
            }
        }
        return lo;
    }
};