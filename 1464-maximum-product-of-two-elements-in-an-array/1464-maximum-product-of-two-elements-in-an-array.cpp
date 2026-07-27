class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        int secmaxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                secmaxi = maxi;
                maxi = nums[i];
            } else if (nums[i] > secmaxi) {
                secmaxi = nums[i];
            }
        }
        return (maxi - 1) * (secmaxi - 1);
    }
};