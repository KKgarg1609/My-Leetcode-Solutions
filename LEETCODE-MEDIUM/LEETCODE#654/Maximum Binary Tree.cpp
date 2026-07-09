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

    TreeNode* createBinaryTree(vector<int> nums,int i,int j){
        if(i > j){
          return NULL;
        }
        int rootVal = -1;
        int idx = -1;
        for(int I = i; I <= j;I++){
           if(nums[I] > rootVal){
            rootVal = nums[I];
            idx = I;
           }
        }
        TreeNode* Root = new TreeNode(rootVal);
        Root->left = createBinaryTree(nums,i,idx-1);
        Root->right = createBinaryTree(nums,idx+1,j);
        return Root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
      return createBinaryTree(nums,i,j);
    }
};