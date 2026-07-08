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

    ListNode* reverse(ListNode* head,int k){
        ListNode* temp = head;
        int count = 0;
        while(count < k){
             if(temp == NULL){
                return head;
            }
            temp = temp->next;
            count++;   
        }

        ListNode* prevNode = reverse(temp,k);
        count = 0;
        temp = head;
        ListNode* temp1;
        while(count < k){
           temp1 = temp->next;
           temp->next = prevNode;
            prevNode = temp;
            temp = temp1; 
            count++;
        }
        return prevNode;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        head = reverse(head,k);
        return head;
    }
};