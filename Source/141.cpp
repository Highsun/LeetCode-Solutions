/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Caution: this is a direct solution which cannot be compiled and executed!

class Solution {
   public:
    bool hasCycle(ListNode* head) {
        int       cnt = 0;
        ListNode* p   = head;
        while (p && cnt < 10001) {
            p = p->next;
            cnt++;
        }
        if (cnt == 10001) {
            return true;
        } else
            return false;
    }
};