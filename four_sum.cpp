#include <bits/stdc++.h>
using namespace std;

void four_sum(int*a,int n,int k,set<vector<int>> &v){
    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            mp[sum]={i,j};
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            if(mp.find(k-sum)!=mp.end()){
                pair<int,int> s=mp[k-sum];
                if((s.first!=i) && (s.first!=j) && (s.second!=i) && (s.second!=j)){
                    vector<int> p;
                    p.push_back(a[i]);
                    p.push_back(a[j]);
                    p.push_back(a[s.first]);
                    p.push_back(a[s.second]);
                    sort(p.begin(),p.end());
                    v.insert(p);
                }
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        // sort(a,a+n);
        set<vector<int>> v;
        four_sum(a,n,k,v);
        if(v.size()==0){
            cout<<"-1"<<endl;
        }
        else{
        for(auto it:v){
            vector<int> q=it;
            for(int i=0;i<4;i++){
                cout<<q[i]<<" ";
            }
            cout<<"$";
        }
        cout<<endl;
        }
    }
}
