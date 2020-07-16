int Solution::cpFact(int A, int B) {
    int gcd_value=__gcd(A,B);
    if(gcd_value==1) return A;
    while(gcd_value!=1){
        A=A/gcd_value;
        gcd_value=__gcd(A,B);
    }
    return A;
}
