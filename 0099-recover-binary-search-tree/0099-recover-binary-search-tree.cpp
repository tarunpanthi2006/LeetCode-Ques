class Solution {
public:
    void check(TreeNode*root,int hi,int lo){
        if(root == NULL) return;
        if(root->val==hi){
            root->val=lo;
        }
        else if(root->val==lo){
            root->val=hi;
        }
        check(root->left,hi,lo);
        check(root->right,hi,lo);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode*curr=root;
        TreeNode* pred=NULL;
        vector<int>ans;
        while(curr){
            if(curr->left!=NULL){
                pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                if(pred->right==curr){
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
    }
    void recoverTree(TreeNode* root) {
        vector<int>ans = inorderTraversal(root);
        int n=ans.size();
        int hi=0;
        for(int i=0;i<n;i++){
            if(i+1<n && ans[i+1]<ans[i]){
                hi=ans[i];
                break;
            }
        }
        int lo=0;
        for(int i=0;i<n;i++){
            if(i>=1 && ans[i-1]>ans[i]){
                lo=ans[i];
            }
        }
        check(root,hi,lo);
    }
};