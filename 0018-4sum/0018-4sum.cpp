class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i - 1] == nums[i])continue;
            for (int j = i + 1; j < n; j++) {
                int k = j + 1;
                int l = n - 1;
                 if (j > i + 1 && nums[j - 1] == nums[j])continue;
                while (k < l) {
                   long long x = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (x > target) {
                        l--;
                    } else if (x < target) {
                        k++;
                    } else {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        l--;
                        k++;
                        while (k<l && nums[l] == nums[l + 1])l--;
                        while (k<l && nums[k] == nums[k - 1]) k++;
                    }
                }
            }
        }
        return ans;
    }
};