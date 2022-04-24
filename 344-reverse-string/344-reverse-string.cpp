class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        reverse(s.rbegin(),s.rend());
    }
};