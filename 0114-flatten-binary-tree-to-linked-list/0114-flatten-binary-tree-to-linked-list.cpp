class Solution {
public:
    void helper(TreeNode*root,vector<TreeNode*>&v){
        if(root==NULL)return;
        v.push_back(root);
        helper(root->left,v);
        helper(root->right,v);
    }
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        vector<TreeNode*>v;
        helper(root,v);
        for(int i=0;i<v.size()-1;i++){
            v[i]->right=v[i+1];
            v[i]->left=NULL;
        }
    }
};