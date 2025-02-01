/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> m;
        Node* curr = head;
        Node* ans = new Node(-1);
        Node* prev = ans;
        while(curr != nullptr){
            Node* temp = new Node(curr->val);
            prev->next = temp;
            m[curr] = temp;
            prev = temp;
            curr = curr->next;
        }
        curr = head;
        prev = ans->next;
        while(curr != nullptr){
            prev->random = m[curr->random];
            curr = curr->next;
            prev = prev->next;
        }
        return ans->next;
    }
};