int Solution::maxArea(vector<int> &A) {
    int l=0;
    int h=A.size()-1;
    int max_area=0;
    while(l<h){
        if(A[l]<A[h]){
            max_area=max(max_area,A[l]*(h-l));
            l++;
        }
        else{
            max_area=max(max_area,A[h]*(h-l));
            h--;
        }
    }
    return max_area;
}
