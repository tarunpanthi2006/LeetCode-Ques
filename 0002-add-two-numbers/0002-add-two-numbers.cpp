class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        int carry = 0;
        int x=0;
        while (temp1 && temp2) {
            x = temp1->val + temp2->val + carry;
            if (x >= 10) {
                carry = x / 10;
                x = x % 10;
            }
            else carry=0;
            dummy->next = new ListNode(x);
            dummy = dummy->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if (temp1 && temp2 == NULL) {
            while (temp1) {
                x = temp1->val + carry;
                if (x >= 10) {
                    carry = x / 10;
                    x = x % 10;
                }
                else carry=0;
                dummy->next = new ListNode(x);
                dummy = dummy->next;
                temp1=temp1->next;
            }
        }
        else if(temp1==NULL && temp2){
            while (temp2) {
                x = temp2->val + carry;
                if (x >= 10) {
                    carry = x / 10;
                    x = x % 10;
                }
                else carry=0;
                dummy->next = new ListNode(x);
                dummy = dummy->next;
                temp2=temp2->next;
            }
        }
        if(carry!=0){
            dummy->next=new ListNode(carry);
        }
        return temp->next;
    }
};