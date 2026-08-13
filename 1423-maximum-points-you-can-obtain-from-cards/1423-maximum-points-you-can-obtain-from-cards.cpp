class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int rightsum=0;
        int leftsum=0;
        int l=0;
        int r=n-1;
        while(l<k){
            leftsum+=nums[l];
            l++;
        }
        int ans=0;
        l--;
        while(l>=0){
            ans=max(ans,leftsum+rightsum);
            leftsum-=nums[l];
            l--;
            rightsum+=nums[r];
            r--;
        }
        ans=max(ans,rightsum);
        return ans;
    }
};