#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int next_permutation(int*a,int n){
    int i;
    for(i=n-1;i>0;i--){
        if(a[i-1]<a[i]) break;
    }
    if(i==0) return -1;
    int element=a[i-1];
    int smallest=i;
    for(int j=i+1;j<n;j++){
        if(a[j]>element && a[j]<a[smallest]){
            smallest=j;
        }
    }
    swap(a[smallest],a[i-1]);
    sort(a+i,a+n);
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ans=next_permutation(a,n);
    if(ans==-1){
        sort(a,a+n);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
    return 0;
}