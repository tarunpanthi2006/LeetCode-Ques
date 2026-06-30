class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // coz mereko index return karni hai so mai map use karunga nahi toh mai sets use karta
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp = target-nums[i];
            if(map.find(temp)==map.end()){
                map[nums[i]]=i;
            }
            else return {i,map[temp]};
        }
        return{0,0};
    }
};