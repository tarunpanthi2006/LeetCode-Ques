class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[nums.size()-1];
        int j=1;
        vector<int>ans;
        for(int i=smallest+1;i<=largest;i++){
            if(nums[j]!=i){
                ans.push_back(i);
                continue;
            }
            if(j!=nums.size()-1)j++;
        }
        return ans;
    }
};