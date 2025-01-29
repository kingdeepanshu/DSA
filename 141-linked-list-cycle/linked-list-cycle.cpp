/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        ListNode* slow = head;
        while(true){
            if(curr == nullptr || curr->next == nullptr){
                return false;
            }
            curr = curr->next->next;
            slow = slow->next;
            if(curr == slow){
                return true;
            }
        }
        return true;
    }
};