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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

   TreeNode* vectoBST(vector<int> vec,int st,int end){
    if(st > end || vec.empty()){
        return NULL;
    }
    int mid = st+(end-st)/2;
    TreeNode* root = new TreeNode(vec[mid]);
    root->left = vectoBST(vec,st,mid-1);
    root->right = vectoBST(vec,mid+1,end);
    return root;
   }

    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector<int> vec;
        while(head != NULL){
            vec.push_back(head->val);
            head = head->next;
        }
        int st = 0;
        int end = vec.size()-1;
        TreeNode* root = vectoBST(vec,st,end);
        return root;
    }
};