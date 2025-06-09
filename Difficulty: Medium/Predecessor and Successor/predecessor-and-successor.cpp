/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* s = nullptr;
        Node* p = nullptr;
        Node* curr = root;
        
        while(curr != nullptr){
            if(curr->data > key){
                s = curr;
                curr = curr->left;
            }else if(curr->data < key){
                p = curr;
                curr = curr->right;
            }else{
                
                if(curr->left){
                    // s = rightmax(curr);
                    Node* r = curr->left;
                    while(r->right) r = r->right;
                    p = r;
                }
                if(curr->right){
                    // p = leftmin(curr);
                    Node* r = curr->right;
                    while(r->left) r = r->left;
                    s = r;
                }
                break;
                
            }
        }
        return {p, s};
    }
};