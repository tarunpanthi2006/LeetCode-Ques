class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int target) {
        int l=0;
        int r=0;
        int n=nums.size();
        int sum=0;
        while(r<k){
            sum+=nums[r];
            r++;
        }
        r--;
        double avg=0;
        int ans=0;
        while(r<n){
            avg=sum/k;
            if(avg>=(double)target)ans++;
            r++;
            if(r<n)sum+=nums[r];
            sum-=nums[l];
            l++;
        }
        return ans;
    }
};