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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = new ListNode(-1);
        head = prev;
        while(true){
            if(curr == nullptr || curr->next == nullptr){
                break;
            }
            ListNode* nxt = curr->next;
            curr->next = nxt->next;
            nxt->next = curr;
            prev->next = nxt;
            prev = curr;
            curr = curr->next;
        }
         
        return head->next;
    }
};