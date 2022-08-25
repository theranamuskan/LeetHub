class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(256);
        for(auto i:magazine){
            vec[i]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(vec[ransomNote[i]]){
                vec[ransomNote[i]]--;
            }
            else
                return false;
        }
        return true;
    }
};