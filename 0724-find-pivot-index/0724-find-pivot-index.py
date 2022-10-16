class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sum1=sum(nums)
        left=0
        for i,x in enumerate(nums):
            if left==(sum1-left-x):
                return i
            left+=x
        return -1