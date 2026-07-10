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

    bool isSame(TreeNode* root1,TreeNode* root2){
        if(root1 == NULL){
            if(root2 == NULL){
                return true;
            }else{
                return false;
            }
        }else if(root2 == NULL){
            if(root1 == NULL){
                return true;
            }else{
                return false;
            }
        }

        bool isLeft = isSame(root1->left,root2->left);
        bool isRight = isSame(root1->right,root2->right);

        return isLeft && isRight && root1->val == root2->val;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
          if(root == NULL && subRoot != NULL){
            return false;
          }
             if(isSame(root,subRoot)){
                return true;;
             }
             return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};