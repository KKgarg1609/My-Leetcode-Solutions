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

    ListNode* swapcurrpair(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
            ListNode* temp = head->next->next;
        ListNode* restlist = swapcurrpair(temp);
        temp = head->next;
        head->next = restlist;
        temp->next = head;
        return temp;
    }

    ListNode* swapPairs(ListNode* head) {
      head = swapcurrpair(head);
      return head;
    }
};