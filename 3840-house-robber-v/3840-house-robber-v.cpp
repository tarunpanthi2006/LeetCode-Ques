class Solution {
public:
// khud kiya hai
// dp ka use jaisa hai bss greedy approach se dp ka kaam kara hai prev aur curr poiters banakar
    void helper(vector<int>& nums,int start, int end, long long &ans){
        long long prev = 0, curr = 0;
        for(int i=start;i<=end;i++){
            long long maxi =max(curr, prev + nums[i]);
            long long temp=curr;
            prev=curr;
            curr=maxi;
        }
        ans += curr;
    }
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n= colors.size();
        if(n==1) return nums[0];
        long long ans=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && colors[i]==colors[i+1]){
                int start = i;
                while(i < n - 1 && colors[i] == colors[i+1]) i++;
                helper(nums,start,i,ans);
            }
            else ans+=nums[i];
        }
        return ans;
    }
};