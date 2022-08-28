class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int count=0, row=mat.size(), col=mat[0].size(); 
      while(count<row){
          for(int i=1; i<row; i++){
              for(int j=1; j<col; j++){
                  if(mat[i][j]<mat[i-1][j-1]) swap(mat[i][j], mat[i-1][j-1]);
              }
          }
          count++;
      }
        return mat;
    }
};