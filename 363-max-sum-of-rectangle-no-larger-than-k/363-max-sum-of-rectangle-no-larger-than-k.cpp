class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0;i < m;++i)
            for(int j = 1;j < n;++j)
                matrix[i][j] += matrix[i][j-1];
        int prefix[n+1];
        int ans = INT_MIN;
        for(int up = 0;up < m;++up){
            memset(prefix, 0, sizeof(prefix));
            for(int down = up;down < m;++down){
                for(int j = 1;j <= n;++j){
                    prefix[j] += matrix[down][j-1];
                    for(int col = 0;col < j;++col)
                        if((prefix[j] - prefix[col]) > ans && (prefix[j] - prefix[col]) <= k)
                            ans = prefix[j] - prefix[col];
                }
            }
        }
        return ans;
    }
};