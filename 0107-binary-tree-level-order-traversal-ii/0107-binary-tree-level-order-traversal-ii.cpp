class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        while(q.size()!=0){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                level.push_back(node->val);
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            ans.push_back(level);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};