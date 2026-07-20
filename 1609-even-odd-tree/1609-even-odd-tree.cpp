class Solution {
public:
// basic BFS he hai bss check lagaye hai beech mein
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(q.size()>0){
            int size=q.size();
            vector<int>ans;
            int i=0;
            while(size--){
                TreeNode*node=q.front();
                q.pop();
                if(count%2==0){
                    ans.push_back(node->val);
                    if(node->val %2==0)return false;
                    if(i-1>=0 && ans[i]<=ans[i-1])return false;
                    i++;
                }
                else{
                    ans.push_back(node->val);
                    if(node->val %2!=0)return false;
                    if(i-1>=0 && ans[i]>=ans[i-1])return false;
                    i++;
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            count++;
        }
        return true;
    }
};