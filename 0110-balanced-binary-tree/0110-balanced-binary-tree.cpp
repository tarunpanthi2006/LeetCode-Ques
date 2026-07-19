class Solution {
public:
int helper(TreeNode* root){
    if(root==NULL)return 0;
    return 1+max(helper(root->left),helper(root->right));
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        // checking every node
        int left = helper(root->left);
        int right=helper(root->right);
        if(abs(left-right)>1)return false;
        // checking children of those nodes
        bool flag1=isBalanced(root->left);
        bool flag2 = isBalanced(root->right);
        if(flag1 && flag2)return true;
        return false;
    }
};