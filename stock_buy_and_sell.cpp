#include <bits/stdc++.h>
using namespace std;
void stock_buy_and_cell(int*a,int n,vector<pair<int,int>> &v){
    int start=0;
    int end=0;
    for(int i=0;i<=n-1;i++){
        if(a[i+1]<a[i]){
            int end=i;
            if(end!=start){
                v.push_back(make_pair(start,end));
            } 
            start=i+1;
        }
    }
    end=n-1;
    if(start<end){
        v.push_back({start,end});
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<pair<int,int>> ans;
        stock_buy_and_cell(a,n,ans);
        if(ans.size()==0){
            cout<<"No Profit"<<endl;
        }
        else {
            for(auto it:ans){
                cout<<"("<<it.first<<" "<<it.second<<")"<<" ";
            }
            cout<<endl;
        }
    }
}
