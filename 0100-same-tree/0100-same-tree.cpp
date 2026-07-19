class Solution {
public:
    bool helper(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val!=q->val)return false;
        bool flag=helper(p->left,q->left);
        if(flag==false)return false;
        bool flag2=helper(p->right,q->right);
        if(flag2==false)return false;
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return helper(p,q);
    }
};