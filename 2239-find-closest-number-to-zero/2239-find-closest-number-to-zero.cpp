class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        sort(nums.begin(),nums.end());
        int ans, maxi = INT_MAX;
        // nums are [-4,-2,1,4,8]
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i]) <= maxi) // 4<=2147483647 , 2<=4 and so on
            {
                /* code */
                maxi = abs(nums[i]); //maxi=4 then 2 and so on
                ans = nums[i]; 
            };
        }
        return ans;
    }
};