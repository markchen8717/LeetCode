'''
  We can first sort the list with a sorting function that does not require extra memory for a new array.
  Then, we can traverse the sorted array keeping account of the previous number. If we come across a new number
  before a duplicate, then we return the previous number.
  Corner cases:
    The distinct number is the last array element.
'''
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        last = nums[0]
        flag = False
        for i in range(1,len(nums)):
            if not flag and nums[i] != last:
                return last
            elif flag:
                last = nums[i]
                flag = False
            else:
                flag = True
        return nums[-1]
