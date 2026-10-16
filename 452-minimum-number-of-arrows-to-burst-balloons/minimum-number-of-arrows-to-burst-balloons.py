class Solution:
    def findMinArrowShots(self, points: list[list[int]]) -> int:
        points.sort()

        ans = 0
        a = float('inf')
        b = a

        for x,y in points:
            if a == b:
                a, b = x,y
            else:
                if b < x:
                    ans += 1
                    a = x
                    b = y
                else:
                    b = min(b, y)


        return ans+1
        