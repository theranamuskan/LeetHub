// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int sum=0;
//         for(int i=1;i<nums.size();i++)
//         {
//             nums[i]+=nums[i-1];
//         }
//          return nums;
//     }
   
// };


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result = {nums[0]};
        for(int i=1;i<nums.size();i++){
            result.push_back(nums[i]+result.back());
        }
         return result;
    }
};