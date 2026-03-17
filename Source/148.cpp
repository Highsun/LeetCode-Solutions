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
    ListNode* sortList(ListNode* head) {
        vector<int> hash_tb(200001, 0);
        ListNode*   p = head;
        while (p) {
            hash_tb[p->val + 100000]++;
            p = p->next;
        }
        ListNode* myhead = new ListNode(0, head);
        p                = myhead;
        for (int i = 0; i < 200001; i++) {
            while (hash_tb[i] > 0) {
                p->next = new ListNode(i - 100000);
                p       = p->next;
                hash_tb[i]--;
            }
        };
        return myhead->next;
    }
};