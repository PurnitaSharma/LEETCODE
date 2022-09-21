class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l=[]
        for i in nums1:
            if i in nums2:
                l.append(i)
                j=nums2.index(i)
                nums2[j]=-1
        return l
                