class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>temp;
        int sum=0;
        for(int i=0;i<board.size();i++){
            vector<int> vec;
            for(int j=0;j<board[i].size();j++){
                sum=0;
                if(i>0 && j>0 && j<board[i].size()-1 && i<board.size()-1 && (i+1)< board.size() && (j+1)< board[i].size() && (i-1)>=0 && (j-1)>=0){
                   sum+= board[i+1][j]+
                            board[i-1][j]+
                            board[i][j-1]+
                            board[i][j+1]+
                            board[i+1][j+1]+
                            board[i+1][j-1]+
                            board[i-1][j-1]+
                            board[i-1][j+1];
                }
                
             if(i==0 && j>0 &&j<board[i].size()-1 && ((i+1)< board.size() && (j+1)< board[i].size() &&(j-1)>=0)){
                    sum+=board[i+1][j]+
                            board[i][j-1]+
                            board[i][j+1]+
                            board[i+1][j+1]+
                            board[i+1][j-1];
                }
                
             if(i==board.size()-1 && j>0 &&j<board[i].size()-1 && ((j+1)< board[i].size() && (i-1)>=0 && (j-1)>=0)){
                    sum+= board[i-1][j]+
                            board[i][j-1]+
                            board[i][j+1]+
                            board[i-1][j-1]+
                            board[i-1][j+1];
                }
            
             if(i<board.size()-1 && i>0 &&j==board[i].size()-1 && ((i+1)< board.size() && (i-1)>=0 && (j-1)>=0)){
                    sum+= board[i+1][j]+
                            board[i-1][j]+
                            board[i][j-1]+
                            board[i+1][j-1]+
                            board[i-1][j-1];
                }
                
             if(i<board.size()-1 && j==0 && i>0 && (i+1)< board.size() && (j+1)< board[i].size() && (i-1)>=0){
                    sum+= board[i+1][j]+
                            board[i-1][j]+
                            board[i][j+1]+
                            board[i+1][j+1]+
                            board[i-1][j+1];
                }
                
             if(((i+1)< board.size() && (j+1)< board[i].size()) && (i==0 && j==0)){
                     sum+= board[i+1][j]+
                            board[i][j+1]+
                            board[i+1][j+1];
                }
                
             if(i==0 && j==board[i].size()-1 && ((i+1)< board.size()) && (j-1)>=0){
                     sum+= board[i+1][j]+
                            board[i+1][j-1]+
                            board[i][j-1];
                }
                
            if(i==board.size()-1 && j==0 && ((j+1)< board[i].size()) && (i-1)>=0){
                     sum+= board[i-1][j]+
                            board[i-1][j+1]+
                            board[i][j+1];
                }
                
                 if(i==board.size()-1 && j==board[i].size()-1 && (i-1)>=0 && (j-1)>=0){
                     sum+= board[i-1][j]+
                            board[i-1][j-1]+
                            board[i][j-1];
                }
                // cout<<board[i][j]<<" ";
                 if(board[i][j]==1 && (sum<2 || sum>3)){
                        vec.push_back(0);
                     // board[i][j]=0;
                    }
                else if(board[i][j]==0 && sum==3){
                        vec.push_back(1);
                        // board[i][j]=1;
                    }
                else{
                    vec.push_back(board[i][j]);
                }
                cout<<sum<<" ";
                }
            cout<<endl;
            temp.push_back(vec);
            }
         for(int i=0;i<temp.size();i++){
                for(int j=0;j<temp[i].size();j++){
board[i][j]=temp[i][j];
                    // cout<<temp[i][j]<<' ';
                }
// cout<<endl;
         }
        }
        
};
// board[i+1][j]+
// board[i-1][j]+
// board[i][j-1]+
// board[i][j+1]+
// board[i+1][j+1]+
// board[i+1][j-1]+
// board[i-1][j-1]+
// board[i-1][j+1]