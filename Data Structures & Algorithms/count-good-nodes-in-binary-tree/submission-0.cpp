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
public:
    int goodNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }
        stack<pair<TreeNode*, int>> s; // {node, max seen since}
        s.emplace(root, root->val);
        int res = 0;
        while (!s.empty()) {
            auto [node, currentMax] = s.top();
            s.pop();

            if (node->val >= currentMax) {
                res++;
            }

            if (node->left) s.emplace(node->left, max(currentMax, node->left->val));
            if (node->right) s.emplace(node->right, max(currentMax, node->right->val));
        }

        return res;
    }
};
