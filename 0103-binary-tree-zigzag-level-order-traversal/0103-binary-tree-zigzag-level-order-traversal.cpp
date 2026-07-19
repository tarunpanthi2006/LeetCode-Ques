class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(q.size()!=0){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                level.push_back(q.front()->val);
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            if(count%2!=0)reverse(level.begin(),level.end());
            count++;
            ans.push_back(level);
        }
        return ans;
    }
};