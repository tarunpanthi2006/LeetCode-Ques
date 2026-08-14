class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int prefixsum=0;
        int ans=0;
        mp.insert({0,1});
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-k)!=mp.end()){
                ans+=mp[prefixsum-k];
            }
            if(mp.find(prefixsum)!=mp.end()){
                mp[prefixsum]++;
            }
            else{
                mp.insert({prefixsum,1});
            }
        }
        return ans;
    }
};