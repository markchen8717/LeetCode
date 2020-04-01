'''
  Easy solution that uses memory for an new array and traverses the original array calculating where each element's new position, and finally copying the new array to the old array
'''
class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        if k == 0:
            return
        y = nums[0:]
        leng = len(nums)
        for i in range(leng):
            y[(i+k)%leng] = nums[i]
        for i in range(leng):
            nums[i]=y[i]
