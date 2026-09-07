/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //forward todkr piche add and use 3 pointer - curr,next,prev

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL) {

            next = curr->next;     // next node save karo
            curr->next = prev;     // link reverse karo

            prev = curr;           // prev ko aage badhao
            curr = next;           // curr ko aage badhao
        }

        return prev;
    }
};