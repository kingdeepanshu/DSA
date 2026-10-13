# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: list[int], inorder: list[int]) -> TreeNode | None:
        d = {val:i for i, val in enumerate(inorder)}
        idx = 0
        def b(left, right):
            nonlocal idx

            if left > right:
                return None
            
            val = preorder[idx]
            idx += 1

            mid = d[val]

            root = TreeNode(val)
            root.left = b(left, mid-1)
            root.right = b(mid+1, right)

            return root
        
        return b(0, len(inorder)-1)



            
        