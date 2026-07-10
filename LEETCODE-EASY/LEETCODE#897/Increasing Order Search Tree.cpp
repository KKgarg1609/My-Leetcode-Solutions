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

    void preorder(TreeNode* root,vector<int>& Preorder){
        if(root == NULL){
            return;
        }
        preorder(root->left,Preorder);
        Preorder.push_back(root->val);
        preorder(root->right,Preorder);
    }

    TreeNode* construct(vector<int> Preorder,int& idx){
            idx++;
             if(idx == Preorder.size()){
                return NULL;
             }
             TreeNode* root = new TreeNode(Preorder[idx]);
             root->right = construct(Preorder,idx);
             return root;
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> Preorder;
        preorder(root,Preorder);
        int idx = -1;
        TreeNode* Root = construct(Preorder,idx);
        return Root;
    }
};