class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int ans=INT_MAX;
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        if(totalsum<target)return 0;
        sum+=nums[r];
        while(r<n){
            if(sum<target){
                r++;
                if(r<n)sum+=nums[r];
            }
            else if(sum>=target){
                ans=min(ans,r-l+1);
                while(sum>=target){
                    ans=min(ans,r-l+1);
                    sum-=nums[l];
                    l++;
                }
            }
        }
        return ans;
    }
};