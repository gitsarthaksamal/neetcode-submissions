class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]={0};
        int col[9][9]={0};
        int box[9][9]={0};
        for(int r=0;r<9;r++){
           for(int c=0;c<9;c++){
            if(board[r][c]=='.') continue;
            int val=board[r][c]-'1';
            if(row[r][val]==1) return false;
            row[r][val]=1;
            if(col[c][val]==1) return false;
            col[c][val]=1;
            int bixid=3*(r/3)+(c/3);
            if(box[bixid][val]==1) return false;
            box[bixid][val]=1;
           } 
        }
        return true;
    }
};
