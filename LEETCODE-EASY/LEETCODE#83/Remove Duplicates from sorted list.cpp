/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     void removenextNode(ListNode* L){
        ListNode* temp;
        temp = L->next;
           L->next = temp->next;
           delete temp;
     }

    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp->next != NULL){
            if(temp->next->val == temp->val){
                removenextNode(temp);
            }else{
                temp = temp->next;
            }
        }
        return head;
    }
};