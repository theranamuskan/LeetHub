class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(); //No of rows
        int n=grid[0].size(); //No of columns
        vector<vector<int>> ans(m, vector<int>(n,0)); //vector<int> (n, 0)" means a vector having "m" elements each of value "0"
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int y=(j+k)%n;
                int x=(i+(j+k)/n)%m;
                ans[x][y]=grid[i][j];
            }
        }
        return ans;
    }
};
