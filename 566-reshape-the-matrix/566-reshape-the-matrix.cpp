class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        
        vector<vector<int>>ans(r, vector<int>(c));
        if (mat.size() * mat[0].size() != r * c)
            return mat;
        int col = 0;
        int row = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                ans[row][col] = mat[i][j];
                col++;
                if (col == c)
                {
                    row++;
                    col = 0;
                }
            }
           
        }
         return ans;
    }
};