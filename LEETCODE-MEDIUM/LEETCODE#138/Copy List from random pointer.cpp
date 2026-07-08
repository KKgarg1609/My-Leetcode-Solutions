/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {


          if(head == NULL){
            return NULL;
          }
       unordered_map<Node*,Node*> M;//map to old and new nodes 

         Node* NewHead = new Node(head->val);//creating new head for copy list
         M[head] = NewHead;
         Node* newtemp = NewHead;//temp variable to track new list
         Node* temp = head;//temp variable to track old nodes

         while(temp != NULL){//loop to create shallow copy
            temp = temp->next;
            if(temp == NULL){
                break;
            }
            Node* tempNode = new Node(temp->val);
            newtemp->next = tempNode;
            newtemp = newtemp->next;
            M[temp] = newtemp;
         }

         temp = head;
         newtemp = NewHead;

         while(temp!= NULL){//loop to link random pointers
            newtemp->random = M[temp->random];
            temp = temp->next;
            newtemp = newtemp->next;
         }

    
       return NewHead;
    }
};