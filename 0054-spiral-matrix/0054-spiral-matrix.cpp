class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        if (matrix.size() == 0)
            return ans;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        int Total_size = matrix.size() * matrix[0].size();
        while (ans.size() < Total_size)
        {
            for (int i = left; i <= right && ans.size() < Total_size; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom && ans.size() < Total_size; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            for (int i = right; i >= left && ans.size() < Total_size; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top && ans.size() < Total_size; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};