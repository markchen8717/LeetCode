'''
  Implemented a hashmap with the following hash function.
  We initialize an array of length 26 with zeros
  Each index represents one letter in the alphabet, and the integer stored represents the
  occurence of that letter in the string
  Strings with the same hash are anagrams!
  
  Time Complexity: O(KN) where N is the number of strings and K is the length of the longest string
  For each string, we must loop through each of its character to generate our hash
'''
class Solution(object):
    def get_hash(self, str):
        s = [0 for i in range(26)]
        for i in str:
            s[ord(i) - 97] +=1
        return tuple(s)
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        hash_table={}
        for i in strs:
            #print(i)
            h = self.get_hash(i)
            if h in hash_table:
                
                hash_table[h].append(i)
            else:
                hash_table[h] = [i]
        print(hash_table)
        output = []
        for i in hash_table:
            output.append(hash_table[i])
        return output
