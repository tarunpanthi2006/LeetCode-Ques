class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        if(n==1)return nums;
        for(int i=0;i<n;i++){
            if(i+1<n && nums[i+1][0]>=nums[i][0] && nums[i+1][0]<=nums[i][1]){
                nums[i+1][0]=nums[i][0];
                nums[i+1][1]=max(nums[i][1] , nums[i+1][1]);
            }
            else{
                ans.push_back({nums[i][0], nums[i][1]});
            }
        }
        return ans;
    }
};