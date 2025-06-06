/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* node) {
        // code here
        if(node == nullptr) return 0;
        int lh = getSize(node->left);
        int rh = getSize(node->right);
        return lh+rh+1;
    }
};