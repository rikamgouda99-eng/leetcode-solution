class Solution:
    def minimumCost(self, cost: List[int]) -> int:
      total=0
      cost.sort(reverse=True)
      for i,price in enumerate(cost):
        if(i+1)%3!=0 :
            total+=price 

      return total
