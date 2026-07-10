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

    void postorder(Node* root,vector<int>& PostOrder){
        if(root == NULL){
            return;
        }
        for(auto i : root->children){
            postorder(i,PostOrder);
        }
        PostOrder.push_back(root->val);
        return;
    }
    
    vector<int> postorder(Node* root) {
        if(root == NULL){
            return {};
        }
        vector<int> PostOrder;
        postorder(root,PostOrder);
        return PostOrder;
    }
};