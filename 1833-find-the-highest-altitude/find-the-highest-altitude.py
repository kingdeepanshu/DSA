class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        a = 0
        ans = a
        for i in gain:
            ans = max(ans, a+i)
            a += i
        
        return ans