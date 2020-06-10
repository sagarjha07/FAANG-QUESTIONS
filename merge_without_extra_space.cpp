#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int a[m],b[n];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int j=0;j<n;j++) cin>>b[j];
        for(int i=n-1;i>=0;i--){
            int j;
            int last=a[m-1];
            for(j=m-2;(j>=0 && a[j]>b[i]);j--){
                a[j+1]=a[j];
            }
            if(j!=m-2 || last>b[i]){
                a[j+1]=b[i];
                b[i]=last;
            }
        }
        for(int i=0;i<m;i++) cout<<a[i]<<" ";
        for(int j=0;j<n;j++) cout<<b[j]<<" ";
        cout<<endl;
    }
}
