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
    void Tree2String(TreeNode* root, string& ans) {
        if (root == NULL) {
            return;
        }
        ans += to_string(root->val);

        if (root->left == NULL && root->right == NULL) {
            return;
        }

        ans += '(';//left 
        Tree2String(root->left, ans);
        ans += ')';

       if(root->right != NULL){
        ans += '(';//right
        Tree2String(root->right, ans);
        ans += ')';
       }

        return;
    }

    string tree2str(TreeNode* root) {
        string ans = "";
        Tree2String(root, ans);
        return ans;
    }
};