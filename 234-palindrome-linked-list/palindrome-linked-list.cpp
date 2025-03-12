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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        int s = 0;
        stack<int> st;
        ListNode* curr = head;
        while(curr!=nullptr){
            st.push(curr->val);
            curr = curr->next;
        } 
        curr = head;
        while(curr != nullptr){
            if(st.top() != curr->val) return false;
            st.pop();
            curr = curr->next;
        }
        return true;
    }
};