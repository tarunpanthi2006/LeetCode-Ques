class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int n = nums.size();
        // int lo = 0;
        // int hi = n - 1;
        // while (hi > lo) {
        //     int mid = lo + (hi - lo) / 2;
        //     if (nums[mid] > target) {
        //         hi = mid;
        //     } else if (nums[mid] < target) {
        //         lo = mid + 1;
        //     }
        //     else { // mid is the target

        //     }
        // }

        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()==0)return{-1,-1};
        else return ans;
    }
};