class Solution {
public:
    bool helper(TreeNode*p,TreeNode*q){
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        if (p->left == NULL && p->right == NULL && q->left == NULL && q->right == NULL) {
            if (p->val == q->val) return true;
            else return false;
        }
        if (p->val != q->val) return false;
        bool flag1=helper(p->left,q->right);
        if(flag1==false)return false;
        bool flag2=helper(p->right,q->left);
        if(flag2==false)return false;
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode*p=root->left;
        TreeNode*q=root->right;
        return helper(p,q);
    }
};