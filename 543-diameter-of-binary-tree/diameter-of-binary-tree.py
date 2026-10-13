# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        ans = 0
        def func(root):
            nonlocal ans
            if root is None: return 0

            l = func(root.left)
            r = func(root.right)

            ans = max(ans, l+r)

            return max(l, r)+1

        func(root)
        return ans