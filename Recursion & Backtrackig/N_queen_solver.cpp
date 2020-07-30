bool isSafe(auto &board,int row,int col,int A){
    for(int i=row-1;i>=0;i--){
        if(board[i][col]=="Q") return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=="Q") return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<A;i--,j++){
        if(board[i][j]=="Q") return false;
    }
    return true;
}
void solve(auto &board,int row,int A,auto &ans){
    if(row==A){
        vector<string> s;
        for(int i=0;i<A;i++){
            string a;
            for(int j=0;j<A;j++){
                a+=(board[i][j]);
            }
            s.push_back(a);
        }
        ans.push_back(s);
        return;
    }
    for(int i=0;i<A;i++){
        if(isSafe(board,row,i,A)){
            board[row][i]="Q";
            solve(board,row+1,A,ans);
            board[row][i]=".";
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> board(A,vector<string>(A));
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            board[i][j]=".";
        }
    }
    vector<vector<string>> ans;
    solve(board,0,A,ans);
    return ans;
    
}
