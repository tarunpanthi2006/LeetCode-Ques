class Solution {
public:
    bool works(int mid,vector<int>& nums,int m,int k){
        int count=0;
        int boq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                count++;
                if(count==k){
                    boq++;
                    count=0;
                }
            }
            else{
                count=0;
            }
            if(boq>=m)return true;
        }
        return (boq>=m);
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        if(n<(long long int)m*k)return -1;
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi)maxi=nums[i];
        }
        int lo=1;
        int hi=maxi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(works(mid,nums,m,k)){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return lo;
    }
};