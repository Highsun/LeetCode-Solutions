/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Caution: this is a direct solution which cannot be compiled and executed!

#include <vector>
class Solution {
   public:
    std::vector<int> preOrderTraversal(TreeNode* root) {
        std::vector<int> result;
        if (root == nullptr) {
            return result;
        }
        result.push_back(root->val);
        std::vector<int> leftResult = preOrderTraversal(root->left);
        result.insert(result.end(), leftResult.begin(), leftResult.end());
        std::vector<int> rightResult = preOrderTraversal(root->right);
        result.insert(result.end(), rightResult.begin(), rightResult.end());
        return result;
    }

    void flatten(TreeNode* root) {
        std::vector<int> preOrder = preOrderTraversal(root);
        TreeNode*        current  = root;
        for (size_t i = 1; i < preOrder.size(); ++i) {
            current->left  = nullptr;
            current->right = new TreeNode(preOrder[i]);
            current        = current->right;
        }
    }
};