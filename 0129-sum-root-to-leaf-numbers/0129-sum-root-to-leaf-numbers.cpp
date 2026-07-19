class Solution {
public:
    int helper(TreeNode*root,int &sum,int val){
        if(root==NULL)return 0;
        val=val*10+root->val;
        if(root->left==NULL && root->right==NULL)sum+=val;
        helper(root->left,sum,val);
        helper(root->right,sum,val);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int ans=helper(root,sum,0);
        return ans;
    }
};