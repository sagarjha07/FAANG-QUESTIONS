#include <iostream>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++) cin>>a[i];
        long long min_idx=0;
        long long max_idx=n-1;
        long long maxelement=a[n-1]+1;
        for(long long i=0;i<n;i++){
            if(i%2==0){
                a[i]+=(a[max_idx]%maxelement)*maxelement;
                max_idx--;
            }
            else{
                a[i]+=(a[min_idx]%maxelement)*maxelement;
                min_idx++;
            }
        }
        for(long long i=0;i<n;i++){
            a[i]=a[i]/maxelement;
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
