class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=1;
        int xor2=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xor1=xor1^nums[i];
        }
        for(int i=0;i<=n;i++){
            xor2=xor2^i;
        }
        return xor1^xor2;
    }
};