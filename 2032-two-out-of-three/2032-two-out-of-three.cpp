class Solution {
public:
    bool search(vector<int>&nums,int n){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n)return true;
        }
        return false;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        int n1=nums1.size();
        for(int i=0;i<n1;i++){
            if(search(ans, nums1[i]) == true) {
                continue; 
            }
            bool flag1=search(nums2,nums1[i]);
            if(flag1){
                ans.push_back(nums1[i]);
                continue;
            }
            bool flag2=search(nums3,nums1[i]);
            if(flag2){
                ans.push_back(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(search(ans, nums2[i]) == true) {
                continue; 
            }
            bool flag=search(nums3,nums2[i]);
            if(flag){
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};