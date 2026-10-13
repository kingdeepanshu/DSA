# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: ListNode | None) -> int:
        if head.next.next is None:
            return head.val + head.next.val
        prev = None
        curr = head
        fast = head
        ans = 0

        while fast is not None and fast.next is not None:
            fast = fast.next.next
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt

        while curr is not None:
            ans = max(ans, prev.val+curr.val)
            prev = prev.next
            curr = curr.next

        return ans
        