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
        // ListNode* fast = head;
        // ListNode* slow = head;
        // while(true){
        //     if(fast == nullptr || fast->next == nullptr) break;
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }
        // if(slow->next){   
        //     slow->val = slow->next->val;
        //     slow->next = slow->next->next;
        // }

        if(head->next == nullptr) return head->next;
        ListNode* curr = head;
        int s = 0;
        while(curr != nullptr){
            s++;
            curr = curr->next;
        }
        curr = head;
        for(int i = 0; i < s/2 - 1; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;

        return head;
    }
};