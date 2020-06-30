#include <bits/stdc++.h>
using namespace std;
int no_of_unique_triplets_with_xor_0(int*a,int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++) s.insert(a[i]);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int xr=a[i]^a[j];
            if(s.find(xr)!=s.end() && xr!=a[i] && xr!=a[j]) count++;
        }
    }
    return count/3;// to get unique triplets
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<no_of_unique_triplets_with_xor_0(a,n)<<endl;
}
