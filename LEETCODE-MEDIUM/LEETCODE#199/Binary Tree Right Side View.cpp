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
    vector<int> rightSideView(TreeNode* root) {

        if(root == NULL){
            return {};
        }
        deque<TreeNode*> Q;

        TreeNode* dummy = new TreeNode(-1); // dummy node to get level end
          Q.push_back(dummy); 
          Q.push_back(root);
      

        vector<int> ans;
        vector<int> temp;
        while (!Q.empty()) {

            if (Q.front() == dummy) {
                if(Q.back() != dummy){
                ans.push_back(Q.back()->val);
                }
                Q.pop_front();
                if(!Q.empty()){
               Q.push_back(dummy);
                }else{
                    break;
                }
            }
            if (Q.front()->left != NULL) {
                Q.push_back(Q.front()->left);
            }
            if (Q.front()->right != NULL) {
                Q.push_back(Q.front()->right);
            }
            Q.pop_front();
        }
        return ans;
    }
};