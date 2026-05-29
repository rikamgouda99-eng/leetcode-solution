class Solution {
public:
    int digit_sum(int x)
    {
        int sum=0;
        while(x>0)
        {
            int rem=x%10;
            sum+=rem;   
            x=x/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums)
    {
        int n=nums.size();
        int maxi=INT_MAX;
        for(int i=0;i<=n-1;i++)
        {
            maxi=min(maxi,digit_sum(nums[i]));
        }
        return maxi;
    }
};
