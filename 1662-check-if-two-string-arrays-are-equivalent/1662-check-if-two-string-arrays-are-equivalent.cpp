class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return reduce(word1.begin(),word1.end())== reduce(word2.begin(),word2.end());
    }
};