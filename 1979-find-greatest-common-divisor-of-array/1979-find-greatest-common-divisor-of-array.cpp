class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi)maxi=nums[i];
            if(nums[i]<mini)mini=nums[i];
        }
        return gcd(maxi,mini);
    }
};