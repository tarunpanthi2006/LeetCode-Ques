class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        // prefix sum and suffix sum toh chahiye then nums[i]se aage ke liye sum-kitne aage*nums[i] and nums[i] ke piche k liye kitne piche*nums[i]-sum;
        int n= nums.size();
        vector<int>prefix;
        vector<int>suffix(n);
        int sum=0;
        for(int i=0;i<n;i++){
            prefix.push_back(sum);
            sum+=nums[i];
        }
        int sum2=0;
        for(int i=n-1;i>=0;i--){
            suffix[i]=sum2;
            sum2+=nums[i];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int x= suffix[i]-(n-i-1)*nums[i];
            int y=(i)*nums[i]-prefix[i];
            ans.push_back(x+y);
        }
        return ans;
    }
};