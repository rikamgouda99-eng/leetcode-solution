class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
      int sum=0,count=0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i:cost)
        {
            if(count<2)
            {
                sum+=i;
                count++;
            }
            else count=0;
        }
        return sum;   
    }
};