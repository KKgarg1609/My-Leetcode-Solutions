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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        queue<TreeNode*> Q;
        vector<vector<int>> ans;
        vector<int> temp;
        Q.push(root);
        TreeNode* dummy = new TreeNode(-1);
        Q.push(dummy);

        while(!Q.empty()){
            if(Q.front() == dummy){
                ans.push_back(temp);
                temp = {};
                Q.pop();
                Q.push(dummy);
            }

            if(Q.front()->left != NULL){
                Q.push(Q.front()->left);
            }
             if(Q.front()->right != NULL){
                Q.push(Q.front()->right);
            }
            temp.push_back(Q.front()->val);
            Q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};