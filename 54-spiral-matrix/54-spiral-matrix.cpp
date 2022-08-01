class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> nums;
        if (matrix.size() == 0)
            return nums;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        int size = matrix.size() * matrix[0].size();
        while (nums.size() < size)
        {
            for (int i = left; i <= right && nums.size() < size; i++)
            {
                nums.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom && nums.size()<size; i++)
            {
                nums.push_back(matrix[i][right]);
            }
            right--;
            for (int i = right; i >= left && nums.size() < size; i--)
            {
                nums.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top && nums.size() < size; i--)
            {
                nums.push_back(matrix[i][left]);
            }
            left++;
        }
        return nums;
    }
};