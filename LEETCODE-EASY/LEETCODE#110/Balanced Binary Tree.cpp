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
 
    int depth(TreeNode* Node){
        if(Node == NULL){
            return 0;
        }else{
            return max(depth(Node->left),depth(Node->right)) + 1;
        }
    }


    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        if(depth(root->left) - depth(root->right) > 1 || depth(root->right) - depth(root->left) > 1){
            return false;
        }else{
            return isBalanced(root->left) && isBalanced(root->right);
        }

       
    
    }
};