class Solution {
public:
    ListNode* reverse(ListNode* start, ListNode*temp){
        ListNode*curr=start;
        ListNode*prev=NULL;
        ListNode* stop = temp->next; 
        while(curr!=stop){
            ListNode*nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 1;
        ListNode*temp=head;
        ListNode*start=head;
        ListNode*prev=NULL;
        while(temp){
            if(count==k){
                ListNode*t=temp->next;
                ListNode*revhead=reverse(start,temp);
                start->next=t;
                if(prev==NULL){
                    head=revhead;
                }
                else{
                    prev->next=revhead;
                }
                count=1;
                prev=start;
                start=t;
                temp=t;
            }
            else{
                count++;
                temp=temp->next;
            }
        }
        return head;
    }
};