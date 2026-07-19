class Solution {
public:
    // basically bss BFS lagaya hai and check laga diya beech mein agar left aur right dono null il gaya tho ans wahi mil gaya
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        bool flag=true;
        while(q.size()>0){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left== NULL && node->right==NULL){
                    flag=false;
                    break;
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            level++;
            if(flag==false)break;
        }
        return level;
    }
};