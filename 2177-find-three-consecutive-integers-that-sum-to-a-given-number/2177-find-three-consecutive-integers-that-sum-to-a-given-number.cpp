class Solution {
public:
    vector<long long> sumOfThree(long long num) {
         if(num%3!=0){
             return { };
         }
        long long a=(num/3)-1;
        return {a,a+1,a+2};
    }
};