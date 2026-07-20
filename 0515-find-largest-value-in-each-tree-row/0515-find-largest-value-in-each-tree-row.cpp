class Solution {
public:
    // simply BFS lagaya and ussme harr level par maximum nikal diya
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0){
            int size=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                maxi=max(maxi,node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};