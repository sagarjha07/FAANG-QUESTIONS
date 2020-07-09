#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string s=a+a;
        int i=s.find(b);
        if(i==2 || a.size()-i==2) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}
