class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        i=0
        j=0
        ans=0
        n1=len(nums1)
        n2=len(nums2)
        while(i<n1 and j<n2):
            if(nums1[i] > nums2[j]):
                i+=1
            else:
                ans=max(ans,j - i)
                j+=1
        return ans