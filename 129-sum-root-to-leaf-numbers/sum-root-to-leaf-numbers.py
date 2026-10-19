# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: TreeNode | None) -> int:
        ans = 0

        def sum(r, a):
            nonlocal ans
            if r == None: return 0

            if a == 0:
                a += r.val
            else:
                a *= 10
                a += r.val

            if r.left == r.right == None:
                ans += a
                a = 0

            sum(r.left, a)
            sum(r.right, a)
        
        sum(root, 0)
        return ans