class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int maximum = INT_MIN;
        int minimum = nums[nums.size()-1];

        vector<int> arr(nums.size());

        arr[nums.size()-1] = nums[nums.size()-1];

       
        for(int i = nums.size()-2; i >= 0; i--)
        {
            minimum = min(minimum, nums[i]);
            arr[i] = minimum;
        }

     
        for(int i = 0; i < nums.size(); i++)
        {
            maximum = max(maximum, nums[i]);

            if(maximum - arr[i] <= k)
                return i;
        }

        return -1;
    }
};