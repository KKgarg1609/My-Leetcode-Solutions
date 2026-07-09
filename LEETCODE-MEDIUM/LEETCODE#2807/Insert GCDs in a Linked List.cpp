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

    int GCD(int m,int n){
        if(m == n){
            return m;
        }
        if(m == 0){
           return n;
        }else if(n == 0){
            return m;
        }

        if(m > n){
            return GCD(m%n , n);
        }else if(n > m){
            return GCD(n%m,m);
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head->next;
        while(slow != NULL){
            ListNode* temp = new ListNode(GCD(fast->val,slow->val));
            fast->next = temp;
            temp->next = slow;
            fast = slow;
            slow = slow->next;
        }
        return head;
    }
};