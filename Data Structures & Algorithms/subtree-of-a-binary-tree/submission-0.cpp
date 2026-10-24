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
    bool sameTree(TreeNode* tree1, TreeNode* tree2) {
        if (!tree1 && !tree2) {
            return true;
        } else if (!tree1 || !tree2) {
            return false;
        } else if (tree1->val == tree2->val) {
            return sameTree(tree1->left, tree2->left) && sameTree(tree1->right, tree2->right);
        } else {
            return false;
        }
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()) {
            TreeNode* node = s.top();
            s.pop();

            if (sameTree(node, subRoot)) {
                return true;
            } else {
                if (node->left) s.push(node->left);
                if (node->right) s.push(node->right);
            }
        }
        return false;
    }
};
