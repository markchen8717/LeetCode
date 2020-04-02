#Solution by recursion
#Used an array to keep track of visited numbers to stop infinite recursion
class Solution:
    def __init__(self):
        self.vis=[]
    def w_sum(self,n):
        s = 0
        for i in str(n):
            s += int(i)*int(i)
        return s
    def isHappy(self, n: int) -> bool:
        w = self.w_sum(n)
        if w in self.vis:
            return False
        else:
            self.vis.append(w)
        if(w == 1):
            return True
        else:
            return self.isHappy(w)
        
