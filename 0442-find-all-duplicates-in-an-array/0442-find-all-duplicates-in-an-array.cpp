class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};