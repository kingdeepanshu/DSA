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
    ListNode* deleteMiddle(ListNode* head) {
        int s = 0;
        ListNode* curr = head;

        while(curr != nullptr){
            curr = curr->next;
            s++;
        }

        if(s == 2){
            head->next = nullptr;
            return head;
        }
        if(s == 1){
            return nullptr;
        }

        s = s/2;
        curr = head;
        while(s > 1 && curr != nullptr){
            curr = curr->next;
            s--;
        }
        curr = curr->next;
        curr->val = curr->next->val;
        curr->next =  curr->next->next;

        return head;
    }
};