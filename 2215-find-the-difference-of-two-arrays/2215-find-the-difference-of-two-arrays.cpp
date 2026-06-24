class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set2;
        for(int i=0;i<nums2.size();i++){
            set2.insert(nums2[i]);
        }
        unordered_set<int>set1;
        for(int i=0;i<nums1.size();i++){
            set1.insert(nums1[i]);
        }
        vector<int>v1;
        vector<int>v2;
        vector<vector<int>>ans(2);
        for(auto ele = set1.begin(); ele != set1.end(); ele++){
            if(set2.find(*ele) == set2.end()){ 
                v1.push_back(*ele);
            }
        }
        for(auto ele = set2.begin(); ele != set2.end(); ele++){
            if(set1.find(*ele) == set1.end()){ 
                v2.push_back(*ele);
            }
        }
        ans[0]=v1;
        ans[1]=v2;
        return ans;
    }
};