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

    ListNode* rotateright(ListNode* head){
        ListNode* Temp = head;
        while(Temp->next->next != NULL){
            Temp = Temp->next;
        }
        ListNode* NewHead = Temp->next;
        Temp->next = NULL;
        NewHead->next = head;
        return NewHead;
    }

    ListNode* rotateRight(ListNode* head, int k) {
           if(head == NULL || head->next == NULL){
            return head;
           }

           ListNode* temp = head;
           int count = 0;
           while(temp != NULL){
            temp = temp->next;
            count++;
           }
           k %= count;
            while(k > 0){
                head = rotateright(head);
                k--;
            }
            return head;
    }
};