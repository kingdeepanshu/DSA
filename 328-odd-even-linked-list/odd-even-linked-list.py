# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: ListNode | None) -> ListNode | None:
        odd = ListNode()
        o = odd
        even = ListNode()
        e = even

        curr = head
        
        while curr:
            o.next = curr
            o = o.next
            if curr.next:
                curr = curr.next
                e.next = curr
                e = e.next
            curr = curr.next
        e.next = None
        o.next = even.next
        return odd.next
        