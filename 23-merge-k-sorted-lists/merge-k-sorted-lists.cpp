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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;

        for(auto i: lists){
            ListNode* curr = i;
            while(curr != nullptr){
                pair<int, ListNode*> p = make_pair(curr->val, curr);
                pq.push(p);
                curr = curr->next;
            }
        }

        ListNode* ans = new ListNode(0);
        ListNode* a = ans;
        while(!pq.empty()){
            ListNode* t = pq.top().second;
            a->next = t;
            a = a->next;
            pq.pop();
        }

        return ans->next;
    }
};