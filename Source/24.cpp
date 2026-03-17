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

// Caution: this is a direct solution which cannot be compiled and executed!

class Solution {
   public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* myhead = new ListNode(0, head);
        ListNode* p      = myhead;
        while (p->next && p->next->next) {
            ListNode* temp = p->next;
            p->next        = p->next->next;
            temp->next     = p->next->next;
            p->next->next  = temp;
            p              = p->next->next;
        }
        return myhead->next;
    }
};