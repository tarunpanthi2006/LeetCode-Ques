class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        stack<int>st1;
        stack<int>st2;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]>0)st1.push(nums[i]);
            else st2.push(nums[i]);
        }
        int i=0;
        while(st2.size()>0){
            nums[i]=st1.top();
            i++;
            st1.pop();
            nums[i]=st2.top();
            st2.pop();
            i++;
        }
        return nums;
    }
};