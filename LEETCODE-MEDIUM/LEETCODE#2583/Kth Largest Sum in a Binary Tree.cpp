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
    long long kthLargestLevelSum(TreeNode* root, int k) {

        if(root == NULL){
            return -1;
        }
        vector<long long> levelSum;
        queue<TreeNode*> Q;
        Q.push(root);
        TreeNode* dummy = new TreeNode(-1);
        Q.push(dummy);
        long long temp = 0;

        while (!Q.empty()) {
            if (Q.front() == dummy) {
                levelSum.push_back(temp);
                temp = 0;
                Q.pop();
                if (!Q.empty()) {
                    Q.push(dummy);
                }
            }else{
            if (Q.front() != NULL && Q.front()->left != NULL) {
                Q.push(Q.front()->left);
            }
            if (Q.front() != NULL && Q.front()->right != NULL) {
                Q.push(Q.front()->right);
            }
            temp += Q.front()->val;
            Q.pop();
            }
        }

        if(levelSum.size() < k){
            return -1;
        }
        sort(levelSum.begin(), levelSum.end(), greater<long long>());
        return levelSum[k - 1];
    }
};