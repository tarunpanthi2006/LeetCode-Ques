class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp.insert({nums[i],1});
            }
        }
        for(auto ele: mp){
            if(ele.second>n/3) ans.push_back(ele.first);
        }
        return ans;
    }
};