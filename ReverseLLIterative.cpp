class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* after;
        while(temp!=NULL){
            after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        return prev;

    }
};