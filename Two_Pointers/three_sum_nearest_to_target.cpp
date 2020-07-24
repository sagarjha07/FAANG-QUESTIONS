int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    long long  best_so_far=(long long)INT_MAX;
    long long nearest=(long long)INT_MAX;
    for(int k=0;k<A.size();k++){
        int i=k+1;
        int j=A.size()-1;
        int find=B-A[k];
         while(i<j){
             int sum=A[i]+A[j];
             if(best_so_far>abs((long long)(sum+A[k])-(long long)B)){
                 nearest=(long long)sum+A[k];
                 best_so_far=abs((long long)(sum+A[k])-(long long)B);
             }
             if(sum<find) i++;
             else if(sum>find) j--;
             else break;
       
        }
    }
    return (int)nearest;
}
