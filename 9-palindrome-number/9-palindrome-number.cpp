class Solution {
public:
    bool isPalindrome(int x) {
        //change the number to string 
        string str=to_string(x);
        //reverse the string
        reverse(str.begin(),str.end());
        // and compare these two
        return to_string(x)==str;
    }
};