class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n =nums.size();
        set<vector<int>>v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> st;
                for(int k=j+1;k<n;k++){
                    long long x = (long long)target - nums[i] - nums[j] - nums[k];
                    if(st.find(x)!=st.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)x};
                        sort(temp.begin(),temp.end());
                        v.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(v.begin(),v.end());
        return ans;
    }
};