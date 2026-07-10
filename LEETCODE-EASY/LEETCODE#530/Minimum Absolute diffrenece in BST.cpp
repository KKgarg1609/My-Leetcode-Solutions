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
   void Inorder(TreeNode* root,vector<int>& inorder){
        if(root == NULL){
            return;
        }
        Inorder(root->left,inorder);
        inorder.push_back(root->val);
        Inorder(root->right,inorder);
        return;

   }

   void mindiff(vector<int>& inorder,int& ans){
    for(int i = 1; i < inorder.size();i++){
        ans = min(abs(inorder[i]-inorder[i-1]),ans);
    }
    return;
   }

    int getMinimumDifference(TreeNode* root) {
        vector<int> inorder;
        Inorder(root, inorder);
       
        int ans = INT_MAX;
        mindiff(inorder,ans);
        return ans;
    }
};