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
class BSTIterator {
public:
    vector<int> inorder;
    int currIdx = 0;

    void DFS(TreeNode* root, vector<int>& inorder) {
        if (root == NULL) {
            return;
        }
        DFS(root->left, inorder);
        inorder.push_back(root->val);
        DFS(root->right, inorder);
        return;
    }

    BSTIterator(TreeNode* root) { DFS(root, inorder); }

    int next() {
       int temp =  inorder[currIdx];
       currIdx++;
            return temp;

        
       
    }

    bool hasNext() {
        if (currIdx == inorder.size()) {
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */