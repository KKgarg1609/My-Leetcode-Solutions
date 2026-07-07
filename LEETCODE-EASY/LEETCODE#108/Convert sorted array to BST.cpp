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

    TreeNode* BSTMaker(vector<int>& nums,int st,int end){
        if(st > end){
            return NULL;
        }
        int mid = st + (end - st)/2;
        TreeNode* Root = new TreeNode(nums[mid]);
        Root->left = BSTMaker(nums,st,mid-1);
        Root->right = BSTMaker(nums,mid+1,end);
        return Root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()){
            return NULL;
        }
        int st = 0;
        int end = nums.size() - 1;
        TreeNode* Root = BSTMaker(nums,st,end);
        return Root;

        
    }
};