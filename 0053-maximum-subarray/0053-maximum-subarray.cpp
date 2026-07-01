class Solution {
public:
        // by kadane's algo
        bool negative(vector<int>nums){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=0)return false;
            }
            return true;
        }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int sum=0;
        int maxsum=INT_MIN;
        if(!negative(nums)){
            for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0)sum=0;
            maxsum=max(maxsum,sum);
        }
        return maxsum;
        }
        else{
            for(int i=0;i<n;i++){
                if(nums[i]>maxi)maxi=nums[i];
            }
            return maxi;
        }
        return 0;
    }
};