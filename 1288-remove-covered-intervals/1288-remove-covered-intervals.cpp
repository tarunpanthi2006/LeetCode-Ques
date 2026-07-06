class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=n;
        for(int i=n-1;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                int k=0;
                if(i==j)continue;
                if(nums[i][k]>=nums[j][k] && nums[i][k+1]<=nums[j][k+1]){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};