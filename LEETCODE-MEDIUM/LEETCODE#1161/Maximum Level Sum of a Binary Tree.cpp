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
    int maxLevelSum(TreeNode* root) {
        if (root == NULL) {
            return -1;
        }

        queue<TreeNode*> Q;

        Q.push(root);
        TreeNode* dummy = new TreeNode(-1);
        Q.push(dummy);

        int count = 1;
        int temp = 0;
        int maxSum = INT_MIN;
        int ans = 0;

        while (!Q.empty()) {
            if (Q.front() == dummy) {
                if (maxSum < temp) {
                    maxSum = temp;
                    ans = count;
                }
                temp = 0;
                count++;
                Q.pop();
                if (!Q.empty()) {
                    Q.push(dummy);
                } else {
                    break;
                }
            }
            if (Q.front()->left != NULL) {
                Q.push(Q.front()->left);
            }
            if (Q.front()->right != NULL) {
                Q.push(Q.front()->right);
            }
            temp += Q.front()->val;
            Q.pop();
        }
        return ans;
    }
};