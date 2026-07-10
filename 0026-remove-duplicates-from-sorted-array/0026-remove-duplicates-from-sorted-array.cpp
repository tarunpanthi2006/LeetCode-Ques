class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        vector<int>v;
        int ans=s.size();
        int i=0;
        for(auto ele :s){
            nums[i]=ele;
            s.erase(ele);
            i++;
        }
        sort(v.begin(),v.end());
        return ans;
    }
};