class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        area=0
        r=len(height)-1
        while l<r:
            max1=min(height[l],height[r])
            area=max(area,(r-l)*max1)
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return area