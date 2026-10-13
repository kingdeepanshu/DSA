# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode | None, targetSum: int) -> bool:
        def func(root, m):
            nonlocal ans 
            if root is None or ans: return

            if root.left == None and root.right == None:
                ans = m+root.val == targetSum 

            func(root.left, m+root.val)
            func(root.right, m+root.val)

        ans = False
        m = 0
        func(root, m)

        return ans
            