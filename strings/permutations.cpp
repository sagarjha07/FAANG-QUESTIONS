#include <bits/stdc++.h>
using namespace std;
void permute(string s,int i){
    if(s[i]=='\0'){
        cout<<s<<" ";
        return;
    }
    for(int j=i;s[j]!='\0';j++){
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        permute(s,0);
        cout<<endl;
    }
}
