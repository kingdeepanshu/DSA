class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 1: return 1
        l = 0
        r = x
        ans = 0
        while l <= r:
            m = l + (r-l)//2
            
            if m*m == x:
                return m
            elif m*m < x:
                ans = m
                l = m+1
            else:
                r = m-1
        
        return ans