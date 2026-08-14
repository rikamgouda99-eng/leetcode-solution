class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        int arr[26] = {0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++)
        {
            arr[s[right] - 'a']++;

            while (arr[s[right] - 'a'] > 2)
            {
                arr[s[left] - 'a']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};