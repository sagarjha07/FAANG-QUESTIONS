vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> ans;
    // upper triangular matrix (in anti diagonal)
    //column iterate
    for(int i=0;i<A[0].size();i++){
        vector<int> res;
        int row=0;
        int col=i;
        while(col>=0){
            res.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(res);
    }
    // lower triangualar matrix (int anti diagonal)
    // row iterate
    for(int i=1;i<A.size();i++){
        vector<int> res;
        int row=i;
        int col=A[0].size()-1;
        while(row<A.size()){
            res.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(res);
    }
    return ans;
}
