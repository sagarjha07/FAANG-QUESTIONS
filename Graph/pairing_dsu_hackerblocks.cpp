#include <bits/stdc++.h>
using namespace std;
class dsu{
    public:
    vector<int> parent;
    vector<int> sz;
    int total_comp;
    void init(int n){
        parent.resize(n);
        sz.resize(n);
        total_comp=n;
        for(int i=0;i<n;i++){
            parent[i]=i;
            sz[i]=1;
        }
    }

    //get supeparent with path compression
    int get_superparent(int x){
        if(parent[x]==x) return x;
        else return parent[x]=get_superparent(parent[x]);
    }

    //union of two sets
    void unite(int x,int y){
        int supeparent_of_x=get_superparent(x);
        int supeparent_of_y=get_superparent(y);
        if(supeparent_of_x!=supeparent_of_y){
            parent[supeparent_of_x]=supeparent_of_y;
            sz[supeparent_of_y]+=sz[supeparent_of_x];
            sz[supeparent_of_x]=0;
            total_comp--;
        }
    }

};
int main() {
    int n,m;
    cin>>n>>m;
    dsu g;
    g.init(n);
    int ans=0;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        // all elements are in connected components
        g.unite(x,y);
    }
    for(int i=0;i<n;i++){
        // i is considered as x
        int supeparent_of_i=g.get_superparent(i);
        ans+=(n-g.sz[supeparent_of_i]);
    }
    cout<<ans/2<<endl;
}
