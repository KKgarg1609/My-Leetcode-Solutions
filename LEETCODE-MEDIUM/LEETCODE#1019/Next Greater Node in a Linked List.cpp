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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;
        while(temp != NULL){
          ListNode* Temp = temp->next;
          while(Temp != NULL && Temp->val <= temp->val){
            Temp = Temp->next;
          }
          if(Temp != NULL){
             ans.push_back(Temp->val);
          }else{
            ans.push_back(0);
          }
          temp = temp->next;
        }
       return ans;
    }
};