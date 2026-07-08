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

    void sumdigits(TreeNode* root,int& sum,int temp){

        if(root->left == NULL && root->right == NULL){
             temp = temp*10 + root->val;
            sum += temp;
            return;
        }
        temp = temp*10 + root->val;
        if(root->left != NULL){
        sumdigits(root->left,sum,temp);
        }
        if(root->right != NULL){
        sumdigits(root->right,sum,temp);
        }
        temp = (temp-root->val)/10;
        return;
    }
    int sumNumbers(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int sum = 0;
        int temp = 0;
        sumdigits(root,sum,temp);
        return sum;
    }
};