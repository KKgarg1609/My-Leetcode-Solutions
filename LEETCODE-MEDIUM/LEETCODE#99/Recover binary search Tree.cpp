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
    TreeNode* first = NULL;
    TreeNode* sec = NULL;
    TreeNode* prev = NULL;

    void findAnomaly(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        findAnomaly(root->left);
        if (prev != NULL && prev->val > root->val) {
            if (!first) {
                first = prev;
            }
            sec = root;
        }
        prev = root;
        findAnomaly(root->right);
        return;
    }

    void recoverTree(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        findAnomaly(root);
        swap(first->val, sec->val);
        return;
    }
};