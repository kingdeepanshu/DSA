# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: TreeNode | None) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        if root == None: return None
        
        arr = []
        def pre(i):
            nonlocal arr
            if not i: return
            arr.append(i)
            pre(i.left)
            pre(i.right)
        
        pre(root)

        r = root

        for i in range(1, len(arr)):
            r.left = None
            r.right = None

            r.right = arr[i]
            r = r.right

        
        
        