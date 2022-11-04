class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            bool for_i=false; bool for_j=false;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I'||s[i]=='O' || s[i]=='U') 
                for_i=true;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i'||s[j]=='o'|| s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I'||s[j]=='O'|| s[j]=='U') 
                for_j=true;
            
            if(for_i && for_j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!for_i)
                i++;
            if(!for_j) 
                j--;
        }
        return s;
    }
};