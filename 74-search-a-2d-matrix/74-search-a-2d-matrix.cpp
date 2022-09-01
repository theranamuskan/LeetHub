// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size();
        
//         if(n == 0 || m == 0)
//             return false;
        
// 		// treating matrix as array just taking care of indices
//         int start = 0, end = m*n - 1;
        
//         while(start <= end)
//         {
//             int mid = start + (end - start) / 2;
// 			// a[x] : matrix[x / m][x % m] formulae
//             int ind = matrix[mid/m][mid%m];
//             if (target == ind)
//                 return true;
// 			// left half
//             else if(target < ind)
//                 end = mid - 1;
//             else
// 			// right half
//                 start = mid + 1;       
//         }
//         return false;
//     }
// };



 // OR




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),
			cols = matrix[0].size(),
            row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        
        return false;
    }
};