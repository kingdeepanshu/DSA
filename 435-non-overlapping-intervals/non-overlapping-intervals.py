class Solution:
    def eraseOverlapIntervals(self, intervals: list[list[int]]) -> int:
        intervals.sort(key=lambda x: x[1])

        ans = 0
        p = float('-inf')
        for a,b in intervals:
            if a < p:
                ans +=1
            else: 
                p = b
        
        return ans