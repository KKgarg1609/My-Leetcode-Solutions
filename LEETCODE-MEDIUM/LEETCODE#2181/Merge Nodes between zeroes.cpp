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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead = NULL;
          ListNode* newTemp;
        ListNode* temp = head;
        int Temp = 0;

        while (temp != NULL) {

            if (temp->val == 0) {

                if (Temp == 0) {

                    temp = temp->next;

                } else {

                    if (!newHead) {

                        newHead = new ListNode(Temp);
                        newTemp = newHead;
                        Temp = 0;
                        temp = temp->next;

                    } else {

                        newTemp->next = new ListNode(Temp);
                        Temp = 0;
                        newTemp = newTemp->next;
                        temp = temp->next;
                    }
                }
            } else {
                Temp += temp->val;
                temp = temp->next;
            }
        }

        return newHead;
    }
};