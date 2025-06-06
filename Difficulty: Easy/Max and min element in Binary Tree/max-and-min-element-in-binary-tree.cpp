/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root == nullptr) return INT_MIN;
        
        int l = findMax(root->left);
        int h = findMax(root->right);
        
        return max(l, max(h, root->data));
    }

    int findMin(Node *root) {
        if(root == nullptr) return INT_MAX;
        
        int l = findMin(root->left);
        int h = findMin(root->right);
        
        // code here
        return min(root->data, min(l, h));
    }
};