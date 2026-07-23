class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // by two pointer approach
        int n=nums.size();
        int left=0;
        int right=n-1;
        int index=n-1;
        vector<int>ans(n);
        while(left<=right){
            int leftsq=nums[left]*nums[left];
            int rightsq=nums[right]*nums[right];
            if(leftsq>rightsq){
                ans[index]=leftsq;
                left++;
            }
            else{
                ans[index]=rightsq;
                right--;
            }
            index--;
        }
        return ans;
    }
};