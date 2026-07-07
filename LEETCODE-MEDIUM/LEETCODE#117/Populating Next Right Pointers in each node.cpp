/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return NULL;
        }
        queue<Node*> Q;
        Node* dummy = NULL;
        Q.push(root);
        Q.push(dummy);

        while(!Q.empty()){
            if(Q.front() == dummy){
                Q.pop();
                if(!Q.empty()){
                    Q.push(dummy);
                }else{
                    break;
                }
            }
                if(Q.front() != NULL && Q.front()->left != NULL){
                    Q.push(Q.front()->left);
                }
                if(Q.front() != NULL && Q.front()->right != NULL){
                    Q.push(Q.front()->right);
                }
            
            Node* temp = Q.front();
            Q.pop();
            temp->next = Q.front();
        }
        return root;
    }
};