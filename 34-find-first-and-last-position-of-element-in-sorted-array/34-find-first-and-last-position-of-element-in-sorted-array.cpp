class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int left = binary_search(nums, target);
        int right = binary_search(nums, target + 1) - 1;
        if (left < nums.size() && nums[left] == target)
            return {left, right};
        else
            return {-1, -1};
    }

    int binary_search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + ((high - low) / 2);
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};