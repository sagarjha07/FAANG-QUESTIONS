int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int first=INT_MAX;
    int second=INT_MAX;
    // above two are candidates for majority element having count>n/3;
    int count1=0;
    int count2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==first){
            count1+=1;
        }
        else if(A[i]==second){
            count2+=1;
        }
        else if(count1==0){
            first=A[i];
            count1=1;
        }
        else if(count2==0){
            second=A[i];
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==first) count1+=1;
        if(A[i]==second) count2+=1;
    }
    if(count1>A.size()/3) return first;
    if(count2>A.size()/3) return second;
    return -1;
}
