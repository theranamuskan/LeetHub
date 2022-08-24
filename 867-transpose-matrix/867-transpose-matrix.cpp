class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> natrix(n,vector<int>(m));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                natrix[row][col]=matrix[col][row];
            }
        }
        return natrix;
    }
};