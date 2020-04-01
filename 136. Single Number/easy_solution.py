'''
  Use a python dictionary to store the frequency of each integer in the original array. Finally, traversing the dictionary 
  for the integer that appears once.
'''
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        freq = {}
        for i in nums:
            if(not i in freq):
                freq[i] = 1
            else:
                freq[i]+=1
        for i in freq:
            if freq[i] == 1:
                return i
            
