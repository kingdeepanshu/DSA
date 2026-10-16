class Solution:
    def merge(self, intervals: list[list[int]]) -> list[list[int]]:
        intervals.sort()

        a = -1
        b = -1
        ans = []
        for x,y in intervals:
            if a == b == -1:
                a, b = x,y
            else:
                if b >= x:
                    b = max(y,b)
                else:
                    ans.append([a,b])
                    a = x
                    b = y
        
        ans.append([a,b])
        return ans