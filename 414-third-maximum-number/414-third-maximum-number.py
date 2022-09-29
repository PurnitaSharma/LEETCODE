class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        s=set(nums)
        s=list(s)
        s.sort(reverse=True)
        #print(s)
        if(len(s)>=3):
            return s[2]
        else:
            return max(s)