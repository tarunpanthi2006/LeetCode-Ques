class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN;
        int level=1;
        int index=1;
        while(q.size()>0){
            int sum=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            if(sum>maxi) {
                maxi=sum;
                level=index; 
            }
            index++;
        }
        return level;
    }
};