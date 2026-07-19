class Solution {
public:
    bool helper(TreeNode*root,int target,int sum){
        if(root==NULL)return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==target)return true;
            return false;
        }
        if(helper(root->left,target,sum))return true;
        if(helper(root->right,target,sum))return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int target) {
        return helper(root,target,0);
    }
};