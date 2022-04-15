class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        int len=nums.size();
        for(int i=0;i<len-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[index++]=nums[i+1];
            }
        }
        return index;
    }
};


