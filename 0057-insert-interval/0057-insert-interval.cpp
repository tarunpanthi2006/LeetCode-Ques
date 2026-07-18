class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& naya) {
        // maine naye vector ko daal diya and sort kar diya phir wahi pichla wala problem bann gaya
        nums.push_back(naya);
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i+1<n && nums[i+1][0]>= nums[i][0] && nums[i+1][0] <=nums[i][1]){
                nums[i+1][0]=nums[i][0];
                nums[i+1][1]=max(nums[i+1][1],nums[i][1]);
            }
            else{
                ans.push_back({nums[i][0],nums[i][1]});
            }
        }
        return ans;
    }
};