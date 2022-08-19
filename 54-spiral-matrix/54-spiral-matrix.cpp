class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int rows=matrix.size(), cols=matrix[0].size();
        int count=0, total=rows*cols;
        int startingRow=0;
        int startingCol=0;
        int endingRow=rows-1;
        int endingCol=cols-1;
        
        while(count<total){
            for(int i=startingCol; count<total && i<=endingCol; i++){
                res.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
             for(int i=startingRow; count<total && i<=endingRow; i++){
                res.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
             for(int i=endingCol; count<total && i>=startingCol; i--){
                res.push_back(matrix[endingRow][i]);
                count++;
            }
             endingRow--;
             for(int i=endingRow; count<total && i>=startingRow; i--){
                res.push_back(matrix[i][startingCol]);
                count++;
            }
             startingCol++;
        }
        return res;
    }
};