class Solution {
public:
    ListNode* reverse(ListNode* start, ListNode* temp) {
    ListNode* prev = NULL;
    ListNode* curr = start;
    ListNode* stop = temp->next; 
    while (curr != stop) {
        ListNode* nxt = curr->next; 
        curr->next = prev;         
        prev = curr;                
        curr = nxt;                 
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* temp = head;
         ListNode* prev = NULL;
        int count = 1;
        while(temp!=NULL){
            if(count==k){
                ListNode* t=temp->next;
                ListNode* reversedHead = reverse(start, temp);
                start->next=t;
                if(prev==NULL){
                    head = reversedHead;
                }
                else{
                    prev->next = reversedHead;
                }
                count=1;
                prev=start;
                start=t;
                temp=t;
            }
            else{
                temp=temp->next;
                count++;
            }
        }
        return head;
    }
};