class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) negative.push_back(nums[i]);
            else positive.push_back(nums[i]);
        }
        int j = 0;
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans.push_back(positive[j]);
                j++;
            } else {
                ans.push_back(negative[k]);
                k++;
            }
        }
        return ans;
    }
};