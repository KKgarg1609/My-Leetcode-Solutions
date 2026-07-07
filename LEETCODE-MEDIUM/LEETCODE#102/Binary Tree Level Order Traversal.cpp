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
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root == NULL){
            return {};
        }

        queue<TreeNode*> Q;
        vector<vector<int>> LOT;
        Q.push(root);
        vector<int> temp;
        TreeNode* dummy = new TreeNode(-1); 
         Q.push(dummy);
        while (!Q.empty()) {

            if (Q.front() == dummy) {
                LOT.push_back(temp);
                temp = {};
                Q.pop();
                Q.push(dummy);
               
            }
            if (Q.front()->left != NULL) {
                Q.push(Q.front()->left);
            }
            if (Q.front()->right != NULL) {
                Q.push(Q.front()->right);
            }
            temp.push_back(Q.front()->val);
            Q.pop();
        }
        return LOT;
    }
};