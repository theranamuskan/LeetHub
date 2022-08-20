class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int R = matrix.size();
        int C = matrix[0].size();
        set<int> rows;
        set<int> cols;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for (auto it : rows)
        {
            for (int i = 0; i < C; i++)
            {
                matrix[it][i] = 0;
            }
        }
        for (auto it: cols)
        {
            for (int j = 0; j < R; j++)
            {
                matrix[j][it] = 0;
            }
            
        }
        
    }
};