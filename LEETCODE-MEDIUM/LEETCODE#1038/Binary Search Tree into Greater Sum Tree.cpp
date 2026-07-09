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

    void replace(TreeNode* root, unordered_map<int, int>& M) {
        if (root == NULL) {
            return;
        }
        root->val = M[root->val];
        replace(root->left,M);
        replace(root->right,M);
        return;
    }

    void inorder(TreeNode* root, vector<int>& Inorder) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, Inorder);
        Inorder.push_back(root->val);
        inorder(root->right, Inorder);
        return;
    }

    TreeNode* bstToGst(TreeNode* root) {
        vector<int> Inorder;
        inorder(root, Inorder);
        unordered_map<int, int> M;
        int sum = 0;
        for (int i = Inorder.size() - 1; i >= 0; i--) {
            sum += Inorder[i];
            M[Inorder[i]] = sum;
        }

        replace(root, M);
        return root;
    }
};