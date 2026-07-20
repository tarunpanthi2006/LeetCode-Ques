class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nth(TreeNode* root,int curr,int level, vector<int>&ans){
        if(root==NULL)return;
        if(curr==level){
            ans[level]=root->val;
            return;
        }
        nth(root->left,curr+1,level,ans);
        nth(root->right,curr+1,level,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(levels(root),0);
        int n=ans.size();
        for(int i=0;i<n;i++){
            nth(root,0,i,ans);
        }
        return ans;
    }
};