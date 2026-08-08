class Solution {
public:
    int maxlen=0;
    void f(TreeNode*root,int last,int len){
        if(root==NULL)return;
        if(len>maxlen)maxlen=len;
        if(last==0){
            f(root->right,1,len+1);
            f(root->left,0,1);
        }
        else{
            f(root->left,0,len+1);
            f(root->right,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        f(root,0,0);
        f(root,1,0);
        return maxlen;
    }
};