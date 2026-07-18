class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0;i<nums.size()-1;i++)
        {  
            for(int j=i;j<nums.size()-1;j++)
            {
                if((nums[i]+nums[j+1])==target)
            return {i,j+1};
            }
        }
        return { };
    }
};