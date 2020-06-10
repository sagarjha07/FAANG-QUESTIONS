vector<int> duplicates(int a[], int n) {
    // code here
    vector<int> v;
    for(int i=0;i<n;i++){
        a[a[i]%n]+=n;
    }
    
    for(int i=0;i<n;i++){
        if((a[i]/n)>1){
            v.push_back(i);
        }
    }
    if(v.size()==0){
        v.push_back(-1);
    }
    return v;
}