#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n=a.size();
        int i=0,j=0;
        set<int> s;
        int maxlen=INT_MIN;
        while(i<n){
            while(j<n && s.find(a[j])==s.end()){
                s.insert(a[j]);
                j++;
            }
            int len=j-i;
            maxlen=max(maxlen,len);
            s.erase(a[i]);
            i++;
        }
        cout<<maxlen<<endl;
    }
}
