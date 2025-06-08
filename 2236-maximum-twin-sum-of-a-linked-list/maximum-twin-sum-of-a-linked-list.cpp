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
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* curr = head;

        while(curr != nullptr){
            st.push(curr->val);
            curr = curr->next;
        }

        curr = head;

        int ans = INT_MIN;

        int s = st.size();
        for(int i = 0; i < s/2; i++){
            ans = max(ans, st.top()+curr->val);
            st.pop();
            curr = curr->next;
        }

        return ans;
    }
};