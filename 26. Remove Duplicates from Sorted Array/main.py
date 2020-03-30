class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        y = nums[0];
        x = 0;
        for i in range(1,len(nums)):
            if y != nums[i]:
                nums[x+1] = nums[i]
                x+=1
                y = nums[i]
        return x+1
    
