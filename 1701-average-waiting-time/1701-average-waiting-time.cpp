class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& nums) {
        int n=nums.size();
        long long sum=0;
        vector<long long>ans;
        for(int i=0;i<n;i++){
            if(sum < nums[i][0]) {
                sum = nums[i][0];
            }
            sum+=nums[i][1];
            ans.push_back(sum-nums[i][0]);
        }
        double add=0;
        for(int i=0;i<ans.size();i++){
            add+=ans[i];
        }
        double result=add/(double)ans.size();
        return result;
    }
};