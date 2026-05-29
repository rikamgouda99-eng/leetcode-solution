int digitcount(int x)
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
int minElement(int* nums, int numsSize) 
{
    int mini=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        
        int sum=digitcount(nums[i]);
        if(sum < mini)
        {
            mini = sum;
        }
    }
    return mini;
}