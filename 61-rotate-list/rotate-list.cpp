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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* curr = head;
        int s = 0;
        while(curr != nullptr){
            s++;
            curr = curr->next;
        }
        k = k%s;
        for(int i = 0; i < k; i++){
            curr = head;
            while(curr->next->next != nullptr) curr = curr->next;
            ListNode* n = curr->next;
            curr->next = nullptr;
            n->next = head;
            head = n;
        }
        return head;
    }
};