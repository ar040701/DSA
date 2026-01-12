class Solution {
    public:
        ListNode* oddEvenList(ListNode* &head) {
            if(head==NULL || head->next==NULL) return head;
            //your code goes here
            ListNode* even = head->next;
            ListNode* odd = head;
            ListNode* evenHead = head->next;
            while(even!=NULL && even->next!=NULL){
                odd->next= odd->next->next;
                even->next = even->next->next;
                odd = odd->next;
                even = even->next;
            }
            odd->next = evenHead;
        return head;
        }
};