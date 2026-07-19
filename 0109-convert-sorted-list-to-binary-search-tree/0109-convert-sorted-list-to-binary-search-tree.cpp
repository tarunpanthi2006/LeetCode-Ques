class Solution {
public:
    TreeNode*build(vector<int>&v,int lo,int hi){
        if(lo>hi)return NULL;
        int mid = lo+(hi-lo)/2;
        TreeNode* node=new TreeNode(v[mid]);
        node->left=build(v,lo,mid-1);
        node->right=build(v,mid+1,hi);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        return build (v,0,n-1);
    }
};