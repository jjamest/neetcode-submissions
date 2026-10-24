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

class Solution {
private:
    TreeNode* search(TreeNode* node, TreeNode* p, TreeNode* q) {
        if (p->val < node->val && q->val > node->val) {
            return node;
        } else if (p->val < node->val && q->val < node->val) {
            return search(node->left, p, q);
        } else if (p->val > node->val && q->val > node->val) {
            return search(node->right, p, q);
        } else {
            return node;
        }
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return search(root, p, q);
    }
};
