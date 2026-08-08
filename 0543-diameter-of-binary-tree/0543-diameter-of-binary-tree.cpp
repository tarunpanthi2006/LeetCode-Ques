class Solution {
public:
    int maxi=0;
    int height(TreeNode*root){
        if(root==NULL)return 0;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        maxi=max(maxi,leftheight+rightheight);
        return 1+max(leftheight,rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxi;
    }
};