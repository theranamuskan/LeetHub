class Solution {
public:
    string removeStars(string s) {
        string result;
        for(char ch:s){
            if(ch != '*'){
                result+=ch;
            }
            else{
                result.pop_back();
            }
        }
        return result;
    }
};