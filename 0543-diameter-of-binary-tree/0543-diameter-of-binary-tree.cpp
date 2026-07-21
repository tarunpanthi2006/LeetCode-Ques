class Solution {
public:
    int helper(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int leftheight=helper(root->left,maxi);
        int rightheight=helper(root->right,maxi);
        maxi = max(maxi, leftheight + rightheight);
        return 1+max(leftheight,rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        helper(root,maxi);
        return maxi;
    }
    // basically iss code mein ky ahi raha hai ... helepr function left aur right subtree mein height nikal raha hai and maxi ko update kar raha hai then at last mai maxi k return kar deta hu
};