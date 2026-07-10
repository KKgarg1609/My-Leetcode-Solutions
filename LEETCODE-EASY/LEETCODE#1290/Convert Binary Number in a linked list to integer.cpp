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
    int getDecimalValue(ListNode* head) {
        string st;
        ListNode* temp = head;
        while(temp != NULL){
            st +=temp->val+'0';
            temp = temp->next;
        }
        reverse(st.begin(),st.end());
        int ans = 0;
        int fac = 1;
        int i = 0;
        while(i < st.size()){
            ans = ans + fac*(st[i]-'0');
            fac *= 2;
            i++;
        }
        return ans;
    }
};