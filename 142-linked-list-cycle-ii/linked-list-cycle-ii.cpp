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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        while(true){
            if(!fast->next) return nullptr;
            if(fast->next->next) fast = fast->next->next;
            else return nullptr;
            slow = slow->next;
            if(slow == fast) break;
        }
        while(slow != head){
            head = head->next;
            slow = slow->next;
        }

        return slow;
    }
};