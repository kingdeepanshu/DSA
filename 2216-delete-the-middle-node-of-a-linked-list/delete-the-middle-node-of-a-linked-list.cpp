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
        ListNode* fast = head;
        ListNode* slow = head;

        if(fast->next == nullptr) return nullptr;

        if(fast->next->next == nullptr){
            fast->next = nullptr;
            return fast;
        }

        while(true){
            if(!fast->next->next){
                break;
            }
            fast = fast->next->next;
            if(fast->next == nullptr){
                break;
            }
            slow = slow->next;
        }
        slow->next = slow->next->next;

        return head;
    }
};