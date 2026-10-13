# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: TreeNode | None, k: int) -> int:
        # return k
        ans = None
        def f(root):
            nonlocal ans, k

            if root is None or ans is not None: return None

            f(root.left)
            if ans is not None:
                return
            if k == 1: 
                ans = root.val
            k -= 1

            f(root.right)
        f(root)
        return ans
