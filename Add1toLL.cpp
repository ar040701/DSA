class Solution {
public:
    ListNode *addOne(ListNode *head) {
        // Approach-1:
        head = reverse(head);
        int carry = 1;
        ListNode* temp = head;
        while(temp!=NULL){
            temp->data += carry;
            if(temp->data<10){
                carry = 0;
                break;
            } else{
                temp->data = 0;
                carry = 1; 
            }
            temp = temp->next;
        }
        if(carry){
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head= newNode;
        }
        head = reverse(head);
        return newNode;
        
        //Approach-2
        int helper(ListNode* temp){
        if(temp==NULL){
            return 1;
        }
        int carr = helper(temp->next);
        temp->data += carr;
        if(temp->data<10){
            return 0;
        }
        temp->data = 0;
        return 1;
    }
public:
    ListNode *addOne(ListNode *head) {
        ListNode* temp = head;
        int carry = helper(temp);
        if(carry==1){
            ListNode* newNode = new ListNode(1);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};