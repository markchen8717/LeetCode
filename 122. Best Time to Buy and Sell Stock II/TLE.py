'''
  Sorted prices based on price and day. In accending order, for each price, find the optimal day to sell.
  Kept a log of transactions to prevent the algo from producing overlapping transactions. Algo is O(N^2) with a big overhead
'''
class Solution:                
    def check(self,b,c,trans):
        for i in trans:
            if i[0] < c <=i[1] or b < i[1] <= c:
                return False
        return True


    def maxProfit(self, prices: List[int]) -> int:
        tuple_lst  = [(prices[i],i) for i in range(len(prices))]
        tuple_lst.sort()
        day_lst = [(i,prices[i]) for i in range(len(prices))]
        transactions = []
        print(tuple_lst)
        print(day_lst)
        day_lst.sort()
        profit = 0
        buy_day = 0
        buy_price = 0
        for i in range(len(tuple_lst)):            
            buy_day = tuple_lst[i][1]
            buy_price = tuple_lst[i][0]
            for j in range(0,len(day_lst)):
                if day_lst[j][0] > buy_day and day_lst[j][1] > buy_price and self.check(buy_day,day_lst[j][0],transactions):
                    profit += day_lst[j][1] - buy_price
                    print("bought on day " + str(buy_day) + " sold on day " + str(day_lst[j][0]))
                    transactions.append((buy_day,day_lst[j][0]))
                    break
        return profit
                
                
        
            
