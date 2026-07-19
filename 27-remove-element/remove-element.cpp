class Solution {
public:
    int removeElement(vector<int>& nums, int val)
     {
        int count=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                arr.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            nums[i]=arr[i];
        }
        return count;
    }
};