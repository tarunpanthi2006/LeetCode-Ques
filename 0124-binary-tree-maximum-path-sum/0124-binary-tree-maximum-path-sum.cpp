class Solution {
public:
    int f(TreeNode*root,int &maxi){
        if(root==NULL)return 0;
        int lefti=max(0,f(root->left,maxi));
        int righti=max(0,f(root->right,maxi));
        maxi=max(maxi,lefti+righti+root->val);
        return max(lefti,righti)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        f(root,maxi);
        return maxi;
    }
};