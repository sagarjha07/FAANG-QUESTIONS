void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int row=0;
    while(row<n){
        for(int col=row;col<n;col++){
            swap(A[row][col],A[col][row]);
        }
        row++;
    }
    int r=0;
    int c=n-1;
    while(r<c){
        for(int i=0;i<n;i++){
            swap(A[i][r],A[i][c]);
        }
        r++;
        c--;
    }
}
