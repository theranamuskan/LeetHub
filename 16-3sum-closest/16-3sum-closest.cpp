class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size(); ++i){
            int t = target - nums[i];
            int start = i+1, end = nums.size()-1;
            while(start < end){
                int r = nums[start] + nums[end];
                if( abs(t - r) < abs(target - ans))  ans = r + nums[i];
                if(r > t) end--;
                else if(r < t) start++;
                else return ans;
            }
        }
        return ans;
    }
};