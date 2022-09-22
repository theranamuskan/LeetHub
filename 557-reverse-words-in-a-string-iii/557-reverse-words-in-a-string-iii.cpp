class Solution
{
public:
    string reverseWords(string s)
    {
        int left = 0, right = 0;
        while (left < s.length())
        {
            while (right < s.length() && s[right] != ' ')
            {
                right++;
            }
            reverse(s.begin() + left, s.begin() + right);
            left = right + 1;
            right = left;
        }
        return s;
    }
};