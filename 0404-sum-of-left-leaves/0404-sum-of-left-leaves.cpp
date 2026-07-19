class Solution {
public:
    int helper(TreeNode*root , int &sum){
        if(root==NULL)return 0;
        if(root->left && root->left->left==NULL && root->left->right==NULL){
            sum+=root->left->val;
        }
        helper(root->left,sum);
        helper(root->right,sum);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        return helper(root,sum);
    }
};