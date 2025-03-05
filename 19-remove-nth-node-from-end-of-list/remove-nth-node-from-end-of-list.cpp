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
        if(curr == nullptr) return head;
        if(curr->next == nullptr) return head->next;

        int c = 0;
        while(curr!=nullptr){
            curr = curr->next;
            c++;
        }

        curr = head;//1
        if(c == n) return head->next;
        c = c-n;//1

        while(c > 1){
            curr = curr->next;
            c--;
        }//1
        // if(curr->next == nullptr) return head->next;
        curr->next = curr->next->next;
        return head;
    }
};