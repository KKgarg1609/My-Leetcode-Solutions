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

   void InorderfromBST(TreeNode* Root,vector<int> &inorder){
    if(Root == NULL){
        return;
    }
    InorderfromBST(Root->left,inorder);
    inorder.push_back(Root->val);
     InorderfromBST(Root->right,inorder);
    return;
   }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        InorderfromBST(root,inorder);
        return inorder[k-1];
    }
};