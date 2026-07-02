class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy= new ListNode(-1);
        ListNode*temp=dummy;
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        while(temp1 && temp2){
            int x;
            if(temp1->val<temp2->val){
                x=temp1->val;
                dummy->next=temp1;
                temp1=temp1->next;
                dummy=dummy->next;
            }
            else{
                x=temp2->val;
                dummy->next=temp2;
                temp2=temp2->next;
                dummy=dummy->next;
            }
        }
        if(temp1== NULL){
            while(temp2){
                dummy->next=temp2;
                temp2=temp2->next;
                dummy=dummy->next;
            }
        }
        else if(temp2==NULL){
            while(temp1){
                dummy->next=temp1;
                temp1=temp1->next;
                dummy=dummy->next;
            }
        }
        return temp->next;
    }
};