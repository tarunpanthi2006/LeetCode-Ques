class Solution {
public:
// bss BFS lagaya hai and ek particular level par koi last node nahi hai toh uska next usske next node se connect kardiya bss utna he tha
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*>q;
        q.push(root);
        while(q.size()>0){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node*node=q.front();
                q.pop();
                if(i!=size-1){
                    node->next=q.front();
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        return root;
    }
};