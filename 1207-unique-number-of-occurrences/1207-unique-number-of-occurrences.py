class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        c=[]
        a=set(arr)
        for i in a:
            if arr.count(i) in c:
                return False
            else:
                c.append(arr.count(i))
        return True