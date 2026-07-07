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
    void pathsvec(vector<vector<int>>& ans, vector<int> temp, TreeNode* root,
                  int targetSum, int sum) {

        if (root == NULL) {
            return;
        }

        if (root != NULL && root->left == NULL && root->right == NULL) {
            if (targetSum == sum + root->val) {
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }
            return;
        }

        temp.push_back(root->val);
        pathsvec(ans, temp, root->left, targetSum, sum + root->val);
        pathsvec(ans, temp, root->right, targetSum, sum + root->val);
        sum -= root->val;
        temp.pop_back();
        return;
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        pathsvec(ans, temp, root, targetSum, sum);
        return ans;
    }
};