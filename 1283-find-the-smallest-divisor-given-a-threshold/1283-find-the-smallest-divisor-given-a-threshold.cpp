class Solution {
public:
    bool check(int mid,vector<int>& nums, int threshold){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil(double(nums[i])/double(mid));
        }
        if(sum<=threshold)return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi)maxi=nums[i];
        }
        int lo=1;
        int hi=maxi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,nums,threshold)){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return lo;
    }
};