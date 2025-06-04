/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* ans = new Node(-1);
        
        Node* curr = head;
        Node* mp = ans;
        Node* a = mp;
        
        while(curr != nullptr){
            Node* prev = nullptr;
            a = mp;
            mp = curr;
            Node* nxt = curr;
            for(int i = 0; i < k; i++){
                if(curr == nullptr){
                    a->next = prev;
                    break;
                }
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            a->next = prev;
        }
        
        return ans->next;
    }
};