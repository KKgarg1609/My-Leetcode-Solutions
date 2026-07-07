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

    bool isPathsum(TreeNode* root,int targetSum,int& sum){
        if(root == NULL){
           return false;
        }
       
        sum += root->val;
         if(sum == targetSum && root->left == NULL && root->right == NULL){
            return true;
        }
        bool ans = isPathsum(root->left,targetSum,sum) || isPathsum(root->right,targetSum,sum) ;
        sum -= root->val;
        return ans;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root == NULL){
            return false;
        }
       
         int sum = 0;
        return isPathsum(root,targetSum,sum);
       
    }
};