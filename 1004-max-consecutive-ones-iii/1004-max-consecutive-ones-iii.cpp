class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // i can transform this question as max length of the subarray having atmost k zeroes
        int n=nums.size();
        int l=0;
        int r=0;
        int zero=0;
        int ans=0;
        while(r<n){
            if(nums[r]==1) {
                ans=max(ans,r-l+1);
                r++;
                continue;
            }
            else{
                zero++;
                if(zero>k){
                    while(nums[l]!=0){
                        l++;
                    }
                    l++;
                    zero--;
                }
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};