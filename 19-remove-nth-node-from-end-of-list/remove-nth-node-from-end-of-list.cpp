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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int s = 0;
        while (curr != nullptr) {
            s++;
            curr = curr->next;
        } // 5
        if(s == n) return head->next;
        int m = s - n; // 5-2 = 3
        curr = head;
        for (int i = 0; i < m-1; i++) {
            curr = curr->next;
        }
        if(curr->next){
            curr->next = curr->next->next;
        }else{
            return nullptr;
        }
        return head;

    }
};