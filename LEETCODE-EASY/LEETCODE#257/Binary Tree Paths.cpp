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
    void addpath(TreeNode* Root, vector<string>& ans, string& temp) {
        if(Root == NULL){
            return;
        }
        if (Root->left == NULL && Root->right == NULL) {
            temp += to_string(Root->val);
            ans.push_back(temp);
             temp.erase(temp.size()-to_string(Root->val).size());
            return;
        }

        temp += to_string(Root->val);
        if (Root->left != NULL || Root->right != NULL) {
            temp += "->";
        }
        addpath(Root->left, ans, temp);
        addpath(Root->right, ans, temp);

        if (Root->left != NULL || Root->right != NULL) {
           temp.erase(temp.size()-2);
           
        }
        temp.erase(temp.size()-to_string(Root->val).size());
      

        return;
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        vector<string> ans;
        string temp = "";
        addpath(root, ans, temp);
        return ans;
    }
};