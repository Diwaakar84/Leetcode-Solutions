class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l = len(nums)
        red, white = 0, 0
        for c in nums:
            if c == 0:
                red +=1 
            elif c == 1:
                white += 1
        for i in range(red):
            nums[i] = 0
        for i in range(red, red + white):
            nums[i] = 1
        for i in range(red + white, l):
            nums[i] = 2