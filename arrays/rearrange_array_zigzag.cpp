#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int inc;
        if(a[0]>a[1]){
            swap(a[0],a[1]);
            inc=1;
        }
        else if(a[0]<a[1]) inc=1;
        for(int i=1;i<n-1;i++){
            if(a[i]<a[i+1] && inc==1){
                swap(a[i],a[i+1]);
                inc=0;
            }
            else if(a[i]<a[i+1] && inc==0){
                inc=1;
                continue;
            }
            else if(a[i]>a[i+1] && inc==1){
                inc=0;
                continue;
            }
            else if(a[i]>a[i+1] && inc==0){
                swap(a[i],a[i+1]);
                inc=1;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
