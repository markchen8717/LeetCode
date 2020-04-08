'''
  Use a dictionary to store the number of occurences for each interger in the array by traversing the array.
  Then, for each key K in the dictionary, check to see if the key K+1 is also in the dictionary. If so, accumulate the occurences
  of K.
  Time complexity : O(N), our dictionary is a hashmap with constant hashing for integer keys, we must loop it N times, where N
  is the number of integers in the array
  Space complexity: O(N), for storing the occurence dictionary
'''
class Solution:
    def countElements(self, arr: List[int]) -> int:
        if len(arr) <2:
            return 0
        occur = {}
        for i in arr:
            if i in occur:
                occur[i]+=1
            else:
                occur[i]= 1
        count = 0
        for i in occur:
            if i+1 in occur:
                count += occur[i]
        return count
        
