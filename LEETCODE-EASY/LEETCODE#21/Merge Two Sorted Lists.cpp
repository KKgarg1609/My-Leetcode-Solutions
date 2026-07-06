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
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        if (L1 == NULL && L2 == NULL) {
            return NULL;
        } else if (L1 == NULL && L2 != NULL) {
            return L2;
        } else if (L2 == NULL && L1 != NULL) {
            return L1;
        }
        int newVal;
        if (L1->val > L2->val ) {
            newVal = L2->val;
            L2 = L2->next;
        } else if (L2->val >= L1->val) {
            newVal = L1->val;
            L1 = L1->next;
            
        }
        ListNode* NewHead = new ListNode(newVal);
        ListNode* temp = NewHead;

        while (L1 != NULL || L2 != NULL) {
            if ( L2 == NULL ) {
                temp->next = new ListNode(L1->val);
                temp = temp->next;
                L1 = L1->next;
            } else if ( L1 == NULL ) {
                temp->next = new ListNode(L2->val);
                temp = temp->next;
                L2 = L2->next;
            } else if (L1->val == L2->val) {
                temp->next = new ListNode(L1->val);
                temp = temp->next;
                L1 = L1->next;
                temp->next = new ListNode(L2->val);
                temp = temp->next;
                L2 = L2->next;
            }else if(L2->val < L1->val){
                 temp->next = new ListNode(L2->val);
                temp = temp->next;
                L2 = L2->next;
            }else if(L1->val < L2->val){
                 temp->next = new ListNode(L1->val);
                temp = temp->next;
                L1 = L1->next;
            }
        }
        return NewHead;
    }
};