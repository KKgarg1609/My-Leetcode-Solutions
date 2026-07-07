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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        queue<TreeNode*> Q;
        vector<vector<int>> ans = {};

        int count = 0;

         TreeNode* dummy = new TreeNode(-1);
         Q.push(root);
         Q.push(dummy);
         vector<int> temp;

         while(!Q.empty()){
            if(Q.front() == dummy){
                if(count%2 != 0){
                    reverse(temp.begin(),temp.end());
                }
                ans.push_back(temp);
                temp = {};
                Q.pop();
                if(!Q.empty()){
                Q.push(dummy);}
                count++;
            }else{
                if(Q.front()->left != NULL){
                Q.push(Q.front()->left);
                }
                 if(Q.front()->right != NULL){
                Q.push(Q.front()->right);
                }
                temp.push_back(Q.front()->val);
                Q.pop();
            }

         }
         return ans;
    }
};