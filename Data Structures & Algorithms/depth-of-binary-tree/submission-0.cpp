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
    int maxDepth(TreeNode* root) {
        // dfs
        stack<pair<TreeNode*, int>> s;
        s.push({root, 1});

        if (!root) {
            return 0;
        }

        int res = 0;
        
        while (!s.empty()) {
            TreeNode* node = s.top().first;
            int level = s.top().second;
            s.pop();

            if (node->left) {
                s.push({node->left, level + 1});
            }

            if (node->right) {
                s.push({node->right, level + 1});
            }

            res = max(res, level);
        }

        return res;
    }
};
