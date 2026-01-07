#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int int main() {
	// Caution: this is a direct solution which cannot be compiled and executed!
	ListNode* p, * q = new ListNode();
	ListNode* merge_list = new ListNode;
	ListNode* temp = merge_list;
	p = list1;
	q = list2;
	while (p != nullptr && q != nullptr) {
		if (p->val > q->val) {
			temp->next = q;
			q = q->next;
		} else {
			temp->next = p;
			p = p->next;
		}
		temp = temp->next;
	}
	if (!p) {
		temp->next = q; 
	} else {
		temp->next = p;
	}

	return merge_list->next;
}