class Solution:
    def isPalindrome(self, x: int) -> bool:
        a = 0
        b = x

        if b < 0:
            return False

        while x > 9:
            a += x%10
            x = x//10
            a *= 10
        
        a += x

        return a == b