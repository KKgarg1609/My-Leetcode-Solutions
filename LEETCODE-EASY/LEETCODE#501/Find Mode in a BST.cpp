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

    void preorder(TreeNode* root,vector<int> &Preorder){
         if(root == NULL){
            return;
         }
         Preorder.push_back(root->val);
         preorder(root->left,Preorder);
         preorder(root->right,Preorder);
         return;
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> Preorder;
        preorder(root,Preorder);
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int val : Preorder){
            if(s.find(val) != s.end()){
                m[val]++;
            }else if(s.find(val) == s.end()){
                s.insert(val);
                m[val] = 1;
            }
        }
        int Max = 0;
        for(int val : s){
            Max = max(m[val],Max); 
        }
          vector<int> ans;
        for(int val : s){
            if(m[val] == Max){
                ans.push_back(val);
            }
        }
        return ans;
    }
};