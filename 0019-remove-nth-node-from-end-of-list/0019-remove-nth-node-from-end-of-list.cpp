class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode*temp=head;
        int n=0;
        
        while(temp){
            n++;
            temp=temp->next;
        }
        if (n == k) {
            return head->next;
        }
        int x = n-k;
        temp=head;
        for(int i=1;i<x;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;;
        return head;
    }
};