/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* lastNode(Node* head) {
        Node* temp = head;

        while (temp != NULL) {
           
            if (temp->child != NULL) {
                Node* temp1 = temp->next;
                Node* last = lastNode(temp->child);
                temp->next = temp->child;
                temp->next->prev = temp;
                temp->child = NULL;
                last->next = temp1;
                if(temp1 != NULL){
                temp1->prev = last;
                }
            } 
             if(temp->next == NULL){
                return temp;
            } 
             temp = temp->next;
        }
        return temp;
    }

    Node* flatten(Node* head) {
        Node* lastNodE = lastNode(head);
        return head;
    }
};