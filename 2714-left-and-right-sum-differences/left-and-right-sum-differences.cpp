class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n);
        int curr=0;
        int total=0;
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
for(int i=0;i<n;i++)
{
    int leftsum=curr;
    curr+=nums[i];
    int rightsum=total-curr;
    ans[i]=abs(leftsum-rightsum);
}
       return ans;
 }
};

