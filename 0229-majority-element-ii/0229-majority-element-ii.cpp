class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto ele : map){
            if(ele.second>n/3) ans.push_back(ele.first);
        }
        return ans;
    }
};