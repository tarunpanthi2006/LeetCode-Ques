class Solution {
public:
    void inorder(TreeNode*root , vector<int>&v){
        if(root==NULL)return;
        inorder(root->left,v);
        if(root->left==NULL && root->right == NULL){
            v.push_back(root->val);
        }
        inorder(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        inorder(root1,v1);
        inorder(root2,v2);
        int m=v1.size();
        int n=v2.size();
        if(m!=n)return false;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};