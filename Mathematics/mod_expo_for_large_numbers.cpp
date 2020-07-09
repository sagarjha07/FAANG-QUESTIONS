#include <iostream>
using namespace std;
unsigned int aMODm(string a,unsigned int m){
    unsigned int number=0;
    for(unsigned int i=0;i<a.length();i++){
        number=(number*10+(a[i]-'0'));
        number%=m;
    }
    return number;
}
unsigned int mod_expo(string a,unsigned int b,unsigned int m){
    unsigned int ans=aMODm(a,m);
    unsigned int mul=ans;
    for(unsigned int i=1;i<b;i++){
        ans=(ans*mul)%m;
    }
 return ans;
}
int main() {
    unsigned int t;
    cin>>t;
    while(t--){
        string a;
        unsigned int b,m;
        cin>>a>>b>>m;
        cout<<mod_expo(a,b,m)<<endl;
    }
}
