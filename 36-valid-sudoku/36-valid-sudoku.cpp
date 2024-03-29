class Solution {
public:
    //helper function
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i=0;i<9;i++){
            if(board[row][i]==c && i!=col)
                return false;
            if(board[i][col]==c && i!=row)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c && (3*(row/3)+i/3)!=row && (3*(col/3)+i%3)!=col)
                return false;
        }
        return true;
    }
    //main working function
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    if(isValid(board,i,j,board[i][j])==false)
                        return false;
                }
            }
        }
        return true;
    }
};