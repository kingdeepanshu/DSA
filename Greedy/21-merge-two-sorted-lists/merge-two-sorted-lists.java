/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode v1 = list1;
        ListNode v2 = list2;
        ListNode ans = new ListNode();
        ListNode curr = ans;
        while(v1 != null && v2 != null){
            if(v1.val < v2.val){
                curr.next = v1;
                v1 = v1.next;
            }else{
                curr.next = v2;
                v2 = v2.next;
            }
            curr = curr.next;
        }

        while(v1 != null){
            curr.next = v1;
            v1 = v1.next;
            curr = curr.next;
        }
        while(v2 != null){
            curr.next = v2;
            v2 = v2.next;
            curr = curr.next;
        }
        return ans.next;
    }
}