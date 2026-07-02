class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[i]=nums[i];
        }
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        int a=0;
        int b=0;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==target){
                a=nums[i];
                b=nums[j];
                break;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(temp[i]==a)ans.push_back(i);
            else if(temp[i]==b)ans.push_back(i);
            if(ans.size()==2)break;
        }
        return ans;
    }
};