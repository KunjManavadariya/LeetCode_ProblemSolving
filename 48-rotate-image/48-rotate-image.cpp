class Solution {
public:
  void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int start = 0;
        int row = n-1;
        while(start<row){
            for(int i=0;i<(row-start);i++){
                swap(matrix[start][start+i], matrix[start+i][row]);
                swap(matrix[start][start+i], matrix[row][row-i]);
                swap(matrix[start][start+i], matrix[row-i][start]);
            }
            start++;
            row--;
        }
    }
};