class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int leftSum=0;
        for(auto it:nums){ //adding all the elements in the sum
            sum+=it;
        }
        for(int i=0;i<nums.size();i++){ //traversing and checking
            if(leftSum==sum-leftSum-nums[i]){
                return i;  //if found return index
            }
            leftSum+=nums[i]; // else add numbers in the leftSum
        }
        return -1;
    }
    
};