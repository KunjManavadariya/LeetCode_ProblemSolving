class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col=matrix[0].size();
        int rowIndex=0, colIndex=col-1;
        while(rowIndex<row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            if(element==target) return true;
            if(element<target) rowIndex++;
            else colIndex--;
        }
        return false;
    }
};


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size(), n = m ? matrix[0].size() : 0, r = 0, c = n - 1;
//         while (r < m && c >= 0) {
//             if (matrix[r][c] == target) {
//                 return true;
//             }
//             matrix[r][c] > target ? c-- : r++;
//         }
//         return false;
//     }
// };