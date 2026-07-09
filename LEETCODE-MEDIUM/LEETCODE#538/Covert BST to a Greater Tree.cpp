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
    void Inorder(TreeNode* root, vector<int>& reverseinorder) {
        if (root == NULL) {
            return;
        }
        Inorder(root->right, reverseinorder);
        reverseinorder.push_back(root->val);
        Inorder(root->left, reverseinorder);
        return;
    }

    void replace(TreeNode* root, unordered_map<int, int>& M) {
        if (root == NULL) {
            return;
        }
        if (root->left != NULL) {
            replace(root->left, M);
        }
        root->val = M[root->val];
        if (root->right != NULL) {
            replace(root->right, M);
        }
        return;
    }

    TreeNode* convertBST(TreeNode* root) {
        unordered_map<int, int> M;
        vector<int> reverseinorder;
        Inorder(root, reverseinorder);
        long long sum = 0;
        for (int i = 0; i < reverseinorder.size(); i++) {
            sum += reverseinorder[i];
            M[reverseinorder[i]] = sum;
        }
        replace(root, M);
        return root;
    }
};