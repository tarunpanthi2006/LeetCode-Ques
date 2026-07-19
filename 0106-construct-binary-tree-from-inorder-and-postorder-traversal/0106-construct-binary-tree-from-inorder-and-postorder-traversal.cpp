class Solution {
public:
    TreeNode*build(vector<int>& inorder,int instart,int inend,vector<int>& postorder,int poststart,int postend,map<int,int>&map){
        if(instart>inend || poststart>postend)return NULL;
        TreeNode* root=new TreeNode(postorder[postend]);
        int inroot=map[root->val];
        int numsize=inroot-instart;
        root->left=build(inorder,instart,inroot-1,postorder,poststart,poststart+numsize-1,map);
        root->right=build(inorder,inroot+1,inend,postorder,poststart+numsize,postend-1,map);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        TreeNode*root=build(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,map);
        return root;
    }
};