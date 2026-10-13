# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode | None) -> bool:
        ans = True
        def func(root):
            nonlocal ans
            if root is None:
                return 0
            
            l = func(root.left)
            r = func(root.right)

            if abs(r-l) > 1: ans = False 

            return max(l, r) + 1
        
        func(root)
        
        return ans