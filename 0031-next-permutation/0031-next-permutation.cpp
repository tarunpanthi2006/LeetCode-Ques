class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx == -1) {
            sort(nums.begin(), nums.end());
            return;
        }
        vector<int>v;
        for(int i=0;i<idx;i++){
            v.push_back(nums[i]);
        }
        int idx2=0;
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                idx2=i;
                v.push_back(nums[i]);
                break;
            }
        }
        vector<int>temp;
        temp.push_back(nums[idx]);
        for(int i=idx+1;i<n;i++){
            if(i==idx2)continue;
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            v.push_back(temp[i]);
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
    }
};