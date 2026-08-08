class Solution {
public:
    int height(TreeNode*root){
        if(root==NULL)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int lefti=height(root->left);
        int righti=height(root->right);
        if(abs(lefti-righti)<=1){
            return isBalanced(root->left) && isBalanced(root->right) ;
        }
        else return false;
    }
};