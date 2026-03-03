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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *pA = headA, *pB = headB;
        int       lenA = 0, lenB = 0;
        int       cnt = 0;
        while (pA != pB && cnt <= 2 * (lenA + lenB)) {
            if (pA) {
                pA = pA->next;
                lenA++;
                cnt++;
            } else {
                pA = headB;
            }
            if (pB) {
                pB = pB->next;
                lenB++;
                cnt++;
            } else {
                pB = headA;
            }
        }
        if (pA != pB) {
            return nullptr;
        } else
            return pA;
    }
};