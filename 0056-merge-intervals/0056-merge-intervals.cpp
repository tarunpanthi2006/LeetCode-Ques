class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size()){
                if(nums[i+1][0]<=nums[i][1]){
                    nums[i+1][0]=min(nums[i][0],nums[i+1][0]);
                    nums[i+1][1]=max(nums[i][1],nums[i+1][1]);
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
        }
        return nums;
    }
};