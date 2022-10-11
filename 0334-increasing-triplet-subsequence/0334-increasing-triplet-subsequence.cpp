class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small=INT_MAX;
        int big=INT_MAX;
        for(auto it:nums){
            if(it<=small) small=it;
            else if(it<=big) big=it;
            else return true;
        }
        return false;
    }
};


// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 for(int k=j+1;k<nums.size();k++){
//                     if(nums[i]<nums[j] && nums[j]<nums[k] && nums[i]<nums[k])
//                     {
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
// };