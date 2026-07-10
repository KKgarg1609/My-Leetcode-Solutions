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
     
     void inorder(TreeNode* root,vector<int>& Inorder){
        if(root == NULL){
            return;
        }
        inorder(root->left,Inorder);
        Inorder.push_back(root->val);
        inorder(root->right,Inorder);
        return;
     }

    int minDiffInBST(TreeNode* root) {
        vector<int> Inorder;
        inorder(root,Inorder);
        int ans = INT_MAX;
        for(int i = 1; i < Inorder.size();i++){
            ans = min(Inorder[i]-Inorder[i-1],ans);
        }
        return ans;
    }
};