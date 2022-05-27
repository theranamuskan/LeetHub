class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0){ //if the number is greater than zero then only it enters into the loop
         if(num&1)
         {
            num-=1;
            count++;
         }
        else 
        {
            num/=2;
            count++; }  
        }
        return count;
    }
};