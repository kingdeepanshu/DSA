/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node == nullptr) return -1;
        int lh = height(node->left);
        int rh = height(node->right);
        
        return max(lh, rh)+1;
    }
};