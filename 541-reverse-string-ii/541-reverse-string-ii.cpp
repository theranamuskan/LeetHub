class Solution {
public:
    string reverseStr(string s, int k) {
        int left=0;
        int right=min(k,(int)s.length());
        while(left<s.length()){
            reverse(s.begin()+left,s.begin()+right);
            left+=2*k;
            right=min(left+k,(int)s.length());
        }
        return s;
    }
};