/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void levelAssigner(TreeNode* root, unordered_map<int, int>& M, int level,
                       bool& ans, int x, int y) {
        if (root == NULL) {
            return;
        }
        M[root->val] = level;
        levelAssigner(root->left, M, level + 1, ans, x, y);
        levelAssigner(root->right, M, level + 1, ans, x, y);
        if (root->left != NULL && root->right != NULL && root->left->val == x &&
                root->right->val == y ||
            root->left != NULL && root->right != NULL && root->left->val == y &&
                root->right->val == x) {
            ans = true;
        }
    }

    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int, int> M;
        int level = 0;
        bool ans = false;
        levelAssigner(root, M, level, ans, x, y);
        if (!ans && M[x] == M[y]) {
            return true;
        }
        return false;
    }
};