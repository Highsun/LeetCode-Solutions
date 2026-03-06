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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* p = head;
        while (p->next != nullptr) {
            ListNode* q = p->next;
            p->next     = q->next;
            q->next     = head;
            head        = q;
        }
        return head;
    }
};