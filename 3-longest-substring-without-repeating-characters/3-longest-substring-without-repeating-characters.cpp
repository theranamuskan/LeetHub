class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0;
        int right = 0;
        vector<int> vec(256, -1);
        int n = s.size();
        int len = 0;
        while (right < n)
        {
            if (vec[s[right]] != -1)
                left = max(vec[s[right]] + 1, left);
            vec[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};