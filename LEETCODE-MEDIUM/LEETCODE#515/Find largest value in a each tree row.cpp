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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> ans;
        queue<TreeNode*> Q;
        Q.push(root);
        int temp = INT_MIN;
        TreeNode* dummy = new TreeNode(-1);
        Q.push(dummy);

        while (!Q.empty()) {
            if (Q.front() == dummy) {
                ans.push_back(temp);
                temp = INT_MIN;
                Q.pop();
                if (!Q.empty()) {
                    Q.push(dummy);
                } else {
                    break;
                }
            }
            if (Q.front() != NULL && Q.front()->left != NULL) {
                Q.push(Q.front()->left);
            }
            if (Q.front() != NULL && Q.front()->right != NULL) {
                Q.push(Q.front()->right);
            }

            temp = max(temp,Q.front()->val);
            Q.pop();
        }
        return ans;
    }
};