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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;
        ListNode* prv = nullptr;
        ListNode* nxt = curr->next;
        
        while(curr != nullptr){
            nxt = curr->next;
            curr->next = prv;
            prv = curr;
            curr = nxt;
        }
        return prv;
    }
};