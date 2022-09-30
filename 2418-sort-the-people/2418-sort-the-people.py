class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        length = len(heights)
        map1 = {}
        for i in range(length):
            map1[heights[i]] = names[i]
        heights.sort(reverse=True)
        res = []
        for height in heights:
            res.append(map1[height])
        return res
        