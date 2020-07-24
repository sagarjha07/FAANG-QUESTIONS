int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==1 || A.size()==2) return A.size();
    int n=A.size();
    int k=0;
    int i=0;
    while(i<n){
        if(i<n-2 && A[i]==A[i+1] && A[i]==A[i+2]){
            i++;
            continue;
        }
        else A[k++]=A[i++];
    }
    return k;
}
