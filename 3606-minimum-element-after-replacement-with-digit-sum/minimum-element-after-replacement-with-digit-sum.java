class Solution {
    int digit_count(int x)
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
    public int minElement(int[] nums)
    {
        int n=nums.length;
        int maxi=Integer.MAX_VALUE;
        for(int i=0;i<n;i++)
        {
            maxi=Math.min(maxi,digit_count(nums[i]));
        }
        return maxi;
    }
}