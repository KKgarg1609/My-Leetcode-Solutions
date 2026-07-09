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
    ListNode* sortList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector<int> list;
        while(head != NULL){
            list.push_back(head->val);
            head = head->next;
        }

        sort(list.begin(),list.end());

        ListNode* newHead = new ListNode(list[0]);
        ListNode* temp2 = newHead;
        for(int i = 1;i < list.size();i++){
            temp2->next = new ListNode(list[i]);
            temp2 = temp2->next;
        }
        return newHead;
    }
};