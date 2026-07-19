class Solution {
public:
    TreeNode* build(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend,map<int,int>&map){
        if(instart>inend || prestart>preend)return NULL;
        TreeNode*root=new TreeNode(preorder[prestart]);
        int inroot=map[root->val];
        int numsleft=inroot-instart;
        root->left=build(preorder,prestart+1,prestart+numsleft,inorder,instart,inroot-1,map);
        root->right=build(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,map);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        TreeNode* root = build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, map);
        return root;
    }
};