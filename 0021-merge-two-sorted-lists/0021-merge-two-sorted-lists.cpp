class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(head1 != NULL && head2 != NULL) {

            if(head1->val <= head2->val) {
                temp->next = head1;
                head1 = head1->next;
            }
            else {
                temp->next = head2;
                head2 = head2->next;
            }

            temp = temp->next;
        }

        if(head1 != NULL)
            temp->next = head1;
        else
            temp->next = head2;

        return dummy->next;
    }
};