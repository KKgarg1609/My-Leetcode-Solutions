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

    TreeNode* BSTbuilder(TreeNode* root,vector<int>& preorder,int idx){
        if(root == NULL){
            root = new TreeNode(preorder[idx]);
            return root;
        }
        if(root->val < preorder[idx]){
          root->right = BSTbuilder(root->right,preorder,idx);
        }

        if(root->val > preorder[idx]){
            root->left = BSTbuilder(root->left,preorder,idx);
        }
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        TreeNode* root = NULL;
        for(int idx = 0; idx < preorder.size();idx++){
        root = BSTbuilder(root,preorder,idx);
        }
        return root;
    }
};