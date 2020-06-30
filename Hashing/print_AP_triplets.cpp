#include <iostream>
using namespace std;
void print_AP_triplets(int* a,int n){
    for(int i=1;i<n-1;i++){
        for(int j=i-1,k=i+1;j>=0 && k<n;){
            if((a[j]+a[k])==2*a[i]){
                cout<<a[j]<<" "<<a[i]<<" "<<a[k]<<endl;
                j--;
                k++;
            }
            else if((a[j]+a[k])<2*a[i]) k++;
            else j--;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    print_AP_triplets(a,n);
}
