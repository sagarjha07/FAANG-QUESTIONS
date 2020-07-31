int Solution::maxp3(vector<int> &A) {
    if(A.size()<3) return 0;
    if(A.size()==3) return A[0]*A[1]*A[2];
    sort(A.begin(),A.end());
    int n=A.size();
    int ans1,ans2;
    int a=A[n-1];
    int b=A[n-2];
    int c=A[n-3];
    int d=A[0];
    int e=A[1];
    ans1=a*b*c;
    ans2=d*e*a;
    return max(ans1,ans2);
}
