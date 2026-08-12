class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int a=0;
        int b=0;
        while(i<j){
            if(target==nums[i]+nums[j]){
                a=nums[i];
                b=nums[j];
                break;
            }
            else if(target>nums[i]+nums[j]){
                i++;
            }
            else j--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==a)ans.push_back(i);
            else if(v[i]==b)ans.push_back(i);
            if(ans.size()==2)break;
        }
        return ans;
    }
};