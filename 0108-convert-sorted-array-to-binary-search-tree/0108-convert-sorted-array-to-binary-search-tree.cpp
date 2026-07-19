class Solution {
public:
    TreeNode* build(vector<int>& nums,int lo,int hi){
        int mid=lo+(hi-lo)/2;
        if(lo>hi)return NULL;
        TreeNode*node=new TreeNode(nums[mid]);
        node->left=build(nums,lo,mid-1);
        node->right=build(nums,mid+1,hi);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return build(nums,0,n-1);
    }
};