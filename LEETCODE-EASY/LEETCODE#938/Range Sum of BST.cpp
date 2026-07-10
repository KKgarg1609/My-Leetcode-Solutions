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

    void Rangesum(TreeNode* root,int low,int high,int& sum){
        if(root == NULL){
            return;
        }
        if(root->val <= high && root->val >= low){
            sum += root->val;
        }
        Rangesum(root->left,low,high,sum);
        Rangesum(root->right,low,high,sum);
        return;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        Rangesum(root,low,high,sum);
        return sum;
    }
};