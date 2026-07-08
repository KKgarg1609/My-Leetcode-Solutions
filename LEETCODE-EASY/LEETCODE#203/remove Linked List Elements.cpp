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

    ListNode* removeElements(ListNode* head, int Val) {
        if(head == NULL){
            return head;
        }
        while(head->val == Val){
            if(head->next == NULL){
                return NULL;
            }
            head = head->next;
        }
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->next == NULL){
                break;
            }
            if(temp->next->val == Val){
                temp->next = temp->next->next;
            }
            else if(temp->next->val != Val){
            temp = temp->next; }
        }
        return head;
    }
};