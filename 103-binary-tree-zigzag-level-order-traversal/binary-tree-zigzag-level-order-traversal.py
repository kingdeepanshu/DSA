# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: TreeNode | None) -> list[list[int]]:
        if root is None: return []
        q = deque()
        q.append(root)
        z = True
        ans = []
        while q:
            s = len(q)
            a = []
            for i  in range(s):
                f = q[0]
                q.popleft()
                a.append(f.val)
                if f.left: q.append(f.left)
                if f.right: q.append(f.right)
            if z:
                ans.append(a)
            else: 
                a.reverse()
                ans.append(a)
            z = not z
        return ans