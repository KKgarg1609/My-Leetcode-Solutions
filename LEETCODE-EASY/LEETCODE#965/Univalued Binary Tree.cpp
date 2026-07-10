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

    bool isUniVal(TreeNode* root,int& temp){
        if(root == NULL){
            return true;
        }
        if(root->val == temp){
            return isUniVal(root->left,temp) && isUniVal(root->right,temp);
        }
        return false;
    }

    bool isUnivalTree(TreeNode* root) {
        int temp = root->val;
        return isUniVal(root,temp);
    }
};