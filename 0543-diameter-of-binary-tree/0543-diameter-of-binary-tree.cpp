class Solution {
public:
    int maxi=0;
    int height(TreeNode*root){
        if(root==NULL)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void f(TreeNode* root){
        if(root==NULL)return ;
        int rightheight=height(root->right);
        int leftheight=height(root->left);
        maxi=max(maxi,rightheight+leftheight);
        f(root->left);
        f(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        f(root);
        return maxi;
    }
};