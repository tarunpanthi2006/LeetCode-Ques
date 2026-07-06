class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=n;
        for(int i=n-1;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(i==j)continue;
                if(nums[i][0]>=nums[j][0] && nums[i][1]<=nums[j][1]){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};