class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        // prefix sum and suffix sum toh chahiye then nums[i]se aage ke liye sum-kitne aage*nums[i] and nums[i] ke piche k liye kitne piche*nums[i]-sum;
        int n= nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        int sum=0;
        int sum2=0;
        int j=n-1;
        for(int i=0;i<n;i++){
            prefix[i]=sum;
            suffix[j]=sum2;
            sum+=nums[i];
            sum2+=nums[j];
            j--;
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