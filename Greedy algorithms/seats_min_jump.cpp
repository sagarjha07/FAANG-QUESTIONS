int Solution::seats(string A) {
    vector<int> arr;
    for(int i=0;i<A.size();i++){
        if(A[i]=='x'){
            arr.push_back(i);
        }
    }
    int mid=(arr.size()/2);
    int ans=0;
    int start=0;
    int end=0;
    for(int i=0;i<arr.size();i++){
        start=arr[i];
        end=arr[mid]-mid+i;
        ans=(ans+abs(end-start))%10000003;
    }
    return ans%10000003;
}
