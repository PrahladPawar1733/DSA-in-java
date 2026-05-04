class Solution {
public:
    bool validCol(vector<vector<char>>& board, int c){
    int r = board.size();
    vector<int> a (10,0);
    for(int i=0;i<r;i++){
        if(board[i][c] == '.') continue;
        a[board[i][c]-'0']++;
        if(a[board[i][c]-'0']>1)return false;
    }
    return true;
    }
    bool validRow(vector<vector<char>>& board, int r){
    int c = board[0].size();
    vector<int> a (10,0);
    for(int i=0;i<c;i++){
        if(board[r][i] == '.') continue;
        a[board[r][i]-'0']++;
        if(a[board[r][i]-'0']>1)return false;
    }
    return true;
    }
    bool validBox(vector<vector<char>>& board, int r,int c){
        vector<int> a (10,0);
        for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
            if(board[r+i][c+j] == '.') continue;
            a[board[r+i][c+j]-'0']++;
            if(a[board[r+i][c+j]-'0']>1)return false;
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            if(validRow(board,i)==false)return false;
            if(validCol(board,i)==false)return false;
            for(int j=0;j<9;j++){
                if(i%3==0&&j%3==0){
                    if(validBox(board,i,j)==false)return false;
                }

            }
        }
        return true;
    }
};
