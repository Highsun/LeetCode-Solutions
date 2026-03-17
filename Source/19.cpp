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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int       len = 0;
        ListNode* p   = head;
        while (p) {
            len++;
            p = p->next;
        }
        if (n > len) {
            return head;
        } else if (n == len) {
            return head->next;
        } else {
            p = head;
            for (int i = 0; i < len - n - 1; i++) {
                p = p->next;
            }
            p->next = p->next->next;
            return head;
        }
    }
};