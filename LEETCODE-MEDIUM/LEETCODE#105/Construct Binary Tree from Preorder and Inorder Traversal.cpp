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

    int searchRoot(vector<int>& inorder,int target,int left,int right){
         for(int i = left;i <= right;i++){
            if(inorder[i] == target){
                return i;
            }
         }
         return -1;
    }

    TreeNode* TreeBuilder(vector<int>& preorder,vector <int> &inorder,int &index,int left,int right){
        if(left > right ){
            return NULL;
        }

        TreeNode* Root = new TreeNode(preorder[index]);
        int rootindex = searchRoot(inorder,Root->val,left,right);
        index++;
        Root->left = TreeBuilder(preorder,inorder,index,left,rootindex-1);
        Root->right = TreeBuilder(preorder,inorder,index,rootindex+1,right);
        return Root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int left = 0;
        int right = preorder.size()-1;
        int index = 0;
        return TreeBuilder(preorder,inorder,index,left,right);
    }
};