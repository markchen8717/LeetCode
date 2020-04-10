'''
  We parse each string by traversing it from beginning to end using a stack.
  Everytime we encounter '#', we pop a character. Finally, comparing the converted strings.
  Time complexity: O(N), where N is the length of the longest string
  Memory complexity: O(N) we essentially make a copy of the string we want to convert
'''
class Solution:
    def convert(self,string):
        stack = []
        for i in string:
            if i != '#':
                stack +=[i]
            else:
                stack = stack[0:-1]
        return "".join(stack)
    def backspaceCompare(self, S: str, T: str) -> bool:
        return self.convert(S) == self.convert(T)
