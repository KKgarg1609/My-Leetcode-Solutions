/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    void Preorder(Node* root,vector<int>& preorder){
          if(root == NULL){
            return;
        }
           preorder.push_back(root->val);
           for(auto i: root->children){
             Preorder(i,preorder);
           }
           return;
    }

    vector<int> preorder(Node* root) {
        if(root == NULL){
            return {};
        }
        vector<int> preorder;
        Preorder(root,preorder);
        return preorder;
    }
};