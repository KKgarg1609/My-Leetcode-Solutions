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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> Q;

        Q.push(root);
        TreeNode* dummy = new TreeNode(-1);
        Q.push(dummy);
        double sum = 0;
        double count = 0;

        while(!Q.empty()){
            if(Q.front() == dummy){
                ans.push_back(sum/count);
                Q.pop();
                sum = 0;
                count = 0;
                if(!Q.empty()){
                    Q.push(dummy);
                }else{
                    break;
                }
            }
            if(Q.front()->left != NULL){
                Q.push(Q.front()->left);
            }
            if(Q.front()->right != NULL){
                Q.push(Q.front()->right);
            }
            sum += Q.front()->val;
            count++;
            Q.pop();
            
        }
        return ans;
    }
};