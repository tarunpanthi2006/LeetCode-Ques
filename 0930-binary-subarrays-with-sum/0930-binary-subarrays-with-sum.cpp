class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        map<int,int>mp;
        mp.insert({0,1});
        int ans=0;
        int prefixsum=0;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-goal)!=mp.end()){
                ans+=mp[prefixsum-goal];
            }
            mp[prefixsum]++;
        }  
        return ans;
    }
};