class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=[]
        for i in nums:
            if target-i in nums[nums.index(i)+1:]:
                l.append(nums.index(i))
                l.append(nums.index(target-i,nums.index(i)+1))
                return l