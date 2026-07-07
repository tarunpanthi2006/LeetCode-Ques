class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0)return n;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n;i++){
            // sorted array mein n-kth elements agar bada hai toh usske aage ke saare bhi pakka bade honga isiliye sirf isse he check kar liya and boom ans theek hai with O(n)...
            if(nums[n-k]>nums[i])ans++;
        }
        return ans;
    }
};