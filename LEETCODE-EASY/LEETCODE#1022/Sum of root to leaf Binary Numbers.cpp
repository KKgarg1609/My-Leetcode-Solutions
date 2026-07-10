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

    int bintodec(string x){
        int ans = 0;
        int fac = 1;
        for(int i = x.size()-1;i >= 0;i--){
               ans += fac*(x[i]-'0');
               fac *= 2;
        }
        return ans;
    }

    void binnumleaf(TreeNode* root,vector<string>& paths,string temp){
              if(root == NULL){
                return;
              }

              if(root->left == NULL && root->right == NULL){
                     temp += to_string(root->val);
                     paths.push_back(temp);
                     temp.pop_back();
                     return;
              }

              temp += to_string(root->val);
              
              binnumleaf(root->left,paths,temp);
              binnumleaf(root->right,paths,temp);
              temp.pop_back();
    }

    int sumRootToLeaf(TreeNode* root) {
              vector<string> paths;
              string temp;
              binnumleaf(root,paths,temp);
                int ans = 0;
              for(auto path : paths){
                ans += bintodec(path);
              }
              return ans;
    }
};