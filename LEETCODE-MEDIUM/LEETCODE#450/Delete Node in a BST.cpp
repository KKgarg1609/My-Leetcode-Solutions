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
    TreeNode* InorderSuccessor(TreeNode* root) {

        while (root != NULL && root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) {
            return root;
        }

        if (root->val > key) {

            root->left = deleteNode(root->left, key);
            return root;

        } else if (root->val < key) {

            root->right = deleteNode(root->right, key);
            return root;

        } else if (root->val == key) {

            if (root->left == NULL && root->right == NULL) {

                delete root;
                return NULL;

            } else if (root->left != NULL && root->right == NULL) {

                root = root->left;
                return root;

            } else if (root->right != NULL && root->left == NULL) {
                
                 root = root->right;
                return root;

            } else if (root->right != NULL && root->left != NULL) {

                TreeNode* IS = InorderSuccessor(root->right);
                root->val = IS->val;
                root->right = deleteNode(root->right,IS->val);
                return root;
                
            }
        }
        return root;
    }
};