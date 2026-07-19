class Solution {
public:
    vector<vector<int>> helper(TreeNode* root, int target,vector<vector<int>>&ans,vector<int>&v,int sum){
        if(root==NULL)return ans;
        v.push_back(root->val);
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==target){
                ans.push_back(v);
            }
        }
        helper(root->left,target,ans,v,sum);
        helper(root->right,target,ans,v,sum);
        v.pop_back();
        return ans;
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        return helper(root,target,ans,v,0);
    }
};