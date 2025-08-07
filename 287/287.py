class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        size = len(nums)
        contador = [0] * size
        for i in range(size):
            contador[nums[i]-1] += 1
        for i in range(len(contador)):
            if(contador[i] > 1):
                return i+1
