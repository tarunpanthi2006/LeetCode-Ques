class Solution {
public:
    int rob(vector<int>& nums) {
        int num1=0;
        int num2=0;
        int n=nums.size();
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++){
            ans=max(num1,num2+nums[i]);
            temp=num1;
            num1=ans;
            num2=temp;
        }
        return ans;
    }
};