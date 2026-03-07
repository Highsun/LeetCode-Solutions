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

#include <vector>
class Solution {
   public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> vals;
        ListNode*        current = head;
        while (current != nullptr) {
            vals.push_back(current->val);
            current = current->next;
        }
        for (int i = 0; i < vals.size() / 2; ++i) {
            if (vals[i] != vals[vals.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};