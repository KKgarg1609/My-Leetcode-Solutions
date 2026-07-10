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

    void isFound(TreeNode* Root,int Val,TreeNode* &ans){
         if(Root == NULL){
            return;
        }
        if(Root->val == Val){
             ans = Root;
             return;
        }
       
        isFound(Root->left,Val,ans);
        isFound(Root->right,Val,ans);
        return;
    }

    TreeNode* searchBST(TreeNode* root, int Val) {
        if(root == NULL){
            return NULL;
        }
        TreeNode* ans = NULL;
        isFound(root,Val,ans);
        return ans;
        
    }
};