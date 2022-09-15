class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        b=[]
        for z in nums1:
            i=nums2.index(z)
            flag=0
            for j in range(i+1,len(nums2)):
                if nums2[j]>z:
                    b.append(nums2[j])
                    flag=1
                    break
            if flag==0:
                b.append(-1)
        return b