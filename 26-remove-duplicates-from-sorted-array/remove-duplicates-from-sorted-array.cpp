class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int>newarr;
        newarr.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            if(newarr.back()!=nums[i])
            {
                newarr.push_back(nums[i]);
            }
        }
      for (int i = 0; i < newarr.size(); i++)
        {
            nums[i] = newarr[i];
        }

        return newarr.size();
    }
};