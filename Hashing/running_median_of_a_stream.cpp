#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    priority_queue<int> p;
    priority_queue<int,vector<int>,greater<int>> q;
    double med=a[0];
    cout<<med<<endl;
    p.push(a[0]);
    for(int i=1;i<n;i++){
        int curr=a[i];
        if(p.size()>q.size()){
            if(curr<med){
                q.push(p.top());
                p.pop();
                p.push(curr);
            }
            else q.push(curr);
            med=(p.top()+q.top())/2.0;
        }
        else if(p.size()==q.size()){
            if(curr<med){
                p.push(curr);
                med=(double)p.top();
            }
            else{
                q.push(curr);
                med=(double)q.top();
            }
        }
        else{
            if(curr>med){
                p.push(q.top());
                q.pop();
                q.push(curr);
            }
            else p.push(curr);
            med=(p.top()+q.top())/2.0;
        }
        cout<<med<<endl;
    }
}
