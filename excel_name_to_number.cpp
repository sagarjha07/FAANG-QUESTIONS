#include <iostream>
using namespace std;
void name_to_number(string s){
    int n=s.size();
    int p=1;
    int res=0;
    for(int i=n-1;i>=0;i--){
        res+=(s[i]-'A'+1)*p;
        p=p*26;
    }
    cout<<res<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        name_to_number(s);
    }
}
