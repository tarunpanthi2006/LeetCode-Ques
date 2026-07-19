class Solution {
public:
// basically yahi toh BFS hai
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                level.push_back(q.front()->val);
                TreeNode*node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};